#include "student.h"


float countGpa(const int* arr){
    int sum = 0;
    for (int i = 0; i < 5; i++){
        sum += arr[i];
    }
    return float (sum) / 5.0f;
}