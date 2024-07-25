#include<iostream>
int num_count(int array[], int n);
int main() {

    int array[] = {1, 2, 3, 4, 5};

    int n = sizeof(array) / sizeof(array[0]);

     num_count(array, n);

    return 0;
} 