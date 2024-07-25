#include<iostream>
int median_array(int array[], int n);
int main() {

    int array[] = {1, 2, 3, 4, 5};

    int n = sizeof(array) / sizeof(array[0]);

    int median = median_array(array, n);
    fprintf(stdout, "Median number in array is %d\n", median);
    return 0;
} 