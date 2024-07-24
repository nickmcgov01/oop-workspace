#include<iostream>

int sum_two_arrays(int array[], int secondarray[], int n){
    int sum1 = 0;
    for (int i = 0; i < n; i ++){
        sum1 += array[i];
    }
    int sum2;
    for (int j = 0; j < n; j++){
        sum2 += secondarray[j];
    }
    int sum3= sum1 + sum2;
    return sum3;
}
