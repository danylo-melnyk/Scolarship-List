#include "fun.h"


int main() {
    path dirPath = inputPath();
    vector<path> files;
    listCsv(dirPath, files);
    vector<Student> students;
    listStudents(files, students);
    removePaying(students);
    findEachGpa(students);
    formRatingList(students);
    formScShipOwners(students);
    float lowerBound = getLowerBound(students);
    writeToCsv(students, lowerBound);
    return 0;
}

