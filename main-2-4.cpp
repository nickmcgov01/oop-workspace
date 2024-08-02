#include<iostream>
int array_min(int integers[], int length);
int array_max(int integers[], int length);
int sum_min_max(int integers[], int length);
int main() {
    int length;
    std::cout << "Enter length of array: ";
    std::cin >> length;

   
    int* integers = new int[length];

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cin >> integers[i];
    }

    sum_min_max(integers, length);
    

    delete[] integers;

    return 0;
}