#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = filesystem;
using namespace fs;

bool dir_exists(const path&);
path input_path();