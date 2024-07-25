#include <iostream>
#include <algorithm> 

int median_array(int array[], int n) {
    if (n % 2 == 0 || n < 1) {
        return 0;
    }

    std::sort(array, array + n); 

    int median = array[n / 2]; 
    return median;
}