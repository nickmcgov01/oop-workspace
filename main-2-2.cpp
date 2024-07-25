#include<iostream>
int main() {

    int array[] = {1, 2, 3, 4, 5};

    int n = sizeof(array) / sizeof(array[0]);

    int max = max_element(array, n);
    fprintf(stdout, "Maximum number in array is %d\n", max);
    return 0;
} 