#include<iostream>
double arrayMin(double* array, int size);
int main(void){
    int size = 10;
    double array[size] = {1,3,4,1,5,6,2,8,1,7};
    double min = arrayMin(array,size);
    std::cout << min << std::endl;
}