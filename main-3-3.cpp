#include<iostream>
int weighted_average(int array[], int n);

int main() {
    int n;

    // Prompt user for the number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "Weighted average: 0" << std::endl;
        return 0;
    }

    // Allocate memory for the array
    int* array = new int[n];

    // Prompt user to enter the elements
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }

    // Calculate and print the weighted average
    double avg = weighted_average(array, n);
    std::cout << "Weighted average: " << avg << std::endl;

    // Free the allocated memory
    delete[] array;

    return 0;
}