#include<iostream>
#include<iostream>
int min_element(int array[], int n);
int main() {

    int array[] = {1, 2, 3, 4, 5};

    int n = sizeof(array) / sizeof(array[0]);

    int min = min_element(array, n);
    fprintf(stdout, "Minimum number in array is %d\n", min);
    return 0;
} 