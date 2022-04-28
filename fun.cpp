#include "fun.h"

path inputPath(){
    path dirPath;
    do{
        cout << "Введіть повний шлях до директорії: ";
        cin >> dirPath;
    } while (!(dirExists(dirPath)));
    return dirPath;
}
bool dirExists(const path& p){
    if(exists(p))
        return true;
    cout << p << " не є директорією\n";
    return false;
}
void listCsv(const path& dir_path, vector<path>& csvFiles){
    for (const path& filePath : directory_iterator(dir_path))
        if (filePath.extension() == ".csv") csvFiles.push_back(filePath);
}
void listStudents(const vector<path>& files, vector<Student>& students){
    for (const path& file: files){
        ifstream inFile;
        inFile.open(file);
        if(!inFile){
            cout << "Помилка при зчитуванні файлу \n";
            return;
        }
        Student stud;
        string str;
        getline(inFile, str);
        int linesNum = stoi(str);
        while(linesNum--){
            getline(inFile, stud.surname, ',');
            for (int & mark : stud.marks){
                getline(inFile, str, ',');
                mark = stoi(str);
            }
            getline(inFile, str);
            stud.paying = str == "TRUE";
            students.push_back(stud);
        }
        inFile.close();
    }
}