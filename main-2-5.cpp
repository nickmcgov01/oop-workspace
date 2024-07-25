int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    if (is_descending(array, n)){
        fprintf(stdout, "Array is descending ");
        else{
            fprintf(stdout, "Array is not descending");
        }
    }
    return 0;
}