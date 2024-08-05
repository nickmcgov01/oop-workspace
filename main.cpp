#include<iostream>
#include "workshop.h"
int main(){
    // part 2
    double num = 0.0;
    changeValue(&num);
    std::cout << num << std::endl;
    // part 3
    double array[] = {1.1,2.2,3.3,4.4};
    int size = sizeof(array) / sizeof(array[0]);
    printArray(array,size);
    // part 4
    arrayMax(array, size);
    // part 7
    int N = 5;
    int M = 1;
    double* array = dynamicArray(N, M);
    double max = arrayMax(array, N);
    std::cout << max << std::endl;
    delete[] array;
    return 0;

}