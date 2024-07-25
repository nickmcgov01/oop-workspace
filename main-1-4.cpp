#include<iostream>
int sum_two_arrays(int array[],int secondarray[], int n);
int main() {

    int array[] = {1, 2, 3, 4, 5};
    int secondarray[] = {6, 7, 8, 9, 10};

    int n = sizeof(array) / sizeof(array[0]);

     
    fprintf(stdout, "Sum of arrays is %d\n",sum_two_arrays(array,secondarray, n));
    return 0;
} 