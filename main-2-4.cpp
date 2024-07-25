#include<iostream>
int is_ascending(int array[], int n);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    if (is_ascending(array, n)){
        fprintf(stdout, "Array is ascending");
        }else{
            fprintf(stdout, "Array is not ascending");
        }
    return 0;
}