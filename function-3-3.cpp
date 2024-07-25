#include<iostream>

double weighted_average(int array[], int n){
    int avg = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (array[i]==array[j]){
                count++;
            }
            
        }
    }
}