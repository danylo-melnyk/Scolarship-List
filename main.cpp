#include "fun.h"


int main() {
    path dirPath = inputPath();
    vector<path> files;
    listCsv(dirPath, files);
    return 0;
}

