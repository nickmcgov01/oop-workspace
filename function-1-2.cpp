#include <iostream>

double array_mean(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }

    int sum = 0;  // Initialize sum
    for (int i = 0; i < n; ++i) {
        sum += array[i];
    }
    
    double average = static_cast<double>(sum) / n;  // Cast sum to double
    return average;
}


