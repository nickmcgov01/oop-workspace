#include<iostream>
int main() {

    int array[] = {1, 2, 3, 4, 5};

    int n = sizeof(array) / sizeof(array[0]);

    array_sum(array, n);

    return 0;
}