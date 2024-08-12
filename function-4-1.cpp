#include <iostream>
#include <climits>  // For INT_MAX
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
int secondSmallestSum(int* arr, int length) {
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    // Generate all possible sub-arrays and calculate their sums
    for (int i = 0; i < length; i++) {
        int currentSum = 0;
        for (int j = i; j < length; j++) {
            currentSum += arr[j];

            // Update smallest and second smallest sums
            if (currentSum < smallest) {
                secondSmallest = smallest;
                smallest = currentSum;
            } else if (currentSum < secondSmallest && currentSum > smallest) {
                secondSmallest = currentSum;
            }
        }
    }

    return secondSmallest;
}