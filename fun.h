#include <iostream>
#include <filesystem>
#include "student.h"
#include <vector>

using namespace std;
namespace fs = filesystem;
using namespace fs;

path inputPath();
bool dirExists(const path&);
void listCsv(const path&, vector<path>&);