#include<iostream>

bool equalsArray(int *numbers1,int *numbers2,int length);
int* readNumbers();
void printNumbers(int* array, int length);
int secondSmallestSum(int *numbers,int length) ;
int *reverseArray(int *numbers1,int length);
int main(void){
    int length = 10;
    int* array1 = readNumbers();
    int secondSmallestSumNum = secondSmallestSum(array1, length);
    std::cout << secondSmallestSum << std::endl;
    delete[] array1;
    
    return 0;
}