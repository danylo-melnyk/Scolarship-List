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

