#include<iostream>
bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);
int main() {
    int length;
    std::cout << "Enter length of array: ";
    std::cin >> length;

   
    int* integers = new int[length];

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < length; i++) {
        std::cin >> integers[i];
    }

    sum_if_palindrome(integers, length);
    

    delete[] integers;

    return 0;
}