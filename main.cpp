#include "fun.h"


int main() {
    path dirPath = inputPath();
    vector<path> files;
    listCsv(dirPath, files);
    vector<Student> students;
    listStudents(files, students);
    removePaying(students);
    findEachGpa(students);
    return 0;
}

