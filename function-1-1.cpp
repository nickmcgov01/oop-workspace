#include <iostream>

int* readNumbers() {
    
    int* numbers = new int[10];

   
    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];
    }

    // Return the pointer to the allocated array
    return numbers;
}
void printNumbers(int* array, int length) {
    for (int i = 0; i < length; i++) {
        std::cout << i << " " << array[i] << std::endl;
    }
}