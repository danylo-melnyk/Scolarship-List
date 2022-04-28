#include <string>

struct Student;
float countGpa(const int *);

struct Student{
    std::string surname;
    int marks[5];
    bool paying;
    float gpa;
};

