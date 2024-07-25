#include<iostream>
int sum_even(double array[], int n);
int main() {

    double array[] = {1, 2, 3, 4, 5};

    int n = sizeof(array) / sizeof(array[0]);
    double evensum;

    evensum = sum_even(array, n);
    fprintf(stdout,"Sum of even numbers in array is %lf\n",evensum);
    return 0;
} 