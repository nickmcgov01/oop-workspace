#include<iostream>
bool is_palindrome(int integers[], int length) {
    if (length < 1) {
        return false;
    }


    for (int i = 0; i < length/ 2; ++i) {
        if (integers[i] != integers[length - 1 - i]) {
            return -2;
        }
    }

    
    for (int i = 0; i < length / 2 - 1; ++i) {
        if (integers[i] > integers[i + 1]) {
            return -2;
        }
    }

    return true;
}

int sum_array_elements(int integers[], int length){
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum += integers[i];
    }
    return sum;
}
int sum_if_palindrome(int integers[], int length){
    int sum = 0;
    if (length < 1){
        return -1;
    }
    if (is_palindrome(integers, length) == true){
        sum = sum_array_elements(integers, length);  
    }
    else {
        return -2;
    }
    return sum;
}