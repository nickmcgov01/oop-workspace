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

bool equalsArray(int *numbers1,int *numbers2,int length){
    if (length < 1){
        return false;
    }

    for (int i = 0; i < length; i++){
        if (numbers1[i] != numbers2[i]){
            return false;
        }
    }
    return true;
}
int *reverseArray(int *numbers1,int length){
    int* numbers = new int[length];
    for (int i = 0; i < length; i++){
        numbers[i] = numbers1[length - 1 - i];
    }
    return numbers;


}