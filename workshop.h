#include<iostream>
void changeValue(double* ptr){
    *ptr = 42;
}
void printArray(double* array, int size){
    for (int i = 0; i < size; i++){
        std::cout << array[i] << std::endl;
    }
}
double arrayMax(double* array, int size){
    double max = array[0];
    for (int i = 0; i < size; i++){
        if (max < array[i]){
            max = array[i];
        }   
    }
    return max;
}
double* dynamicArray(int N, double M){
    double* array = new double[N];
    for (int i = 0; i < N; i++){
        array[i] = M;
    }
    return array;
}