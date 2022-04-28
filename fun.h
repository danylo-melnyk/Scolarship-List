#include <iostream>
#include <istream>
#include <ios>
#include <fstream>
#include <filesystem>
#include "student.h"
#include <vector>
#include <bits/stdc++.h>

using namespace std;
namespace fs = filesystem;
using namespace fs;

path inputPath();
bool dirExists(const path&);
void listCsv(const path&, vector<path>&);
void listStudents(const vector<path>&, vector<Student>&);
void removePaying(vector<Student>&);
void findEachGpa(vector<Student>&);
void formRatingList(vector<Student>&);
bool gpaCompare(const Student &, const Student &);
bool formScShipOwners(vector <Student>&);
void writeToCsv(const vector <Student>&);

