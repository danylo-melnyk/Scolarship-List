#include <iostream>
#include <filesystem>
#include "student.h"

using namespace std;
namespace fs = filesystem;
using namespace fs;

bool dir_exists(const path&);
path input_path();