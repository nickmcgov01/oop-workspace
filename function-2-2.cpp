#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int integer = 0; 
    for (int i = 0; i < number_of_digits; ++i) { 
        if (binary_digits[i] == 1) {
            integer += (1 << (number_of_digits - 1 - i)); 
        }
    }
    return integer;
}