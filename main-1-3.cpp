#include<iostream>
int num_count(int array[], int n, int number);
int main() {
    int number;
    int array[] = {1, 2, 3, 4, 5};
    fprintf(stdout,"Enter a number");
    fscanf(stdin,"%d",&number);
    int n = sizeof(array) / sizeof(array[0]);

     num_count(array, n, number);

    return 0;
} 