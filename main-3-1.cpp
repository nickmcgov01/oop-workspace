int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    if (is_fanarray(array, n)){
        fprintf(stdout, "Array is fan array ");
        else{
            fprintf(stdout, "Array is not fan array");
        }
    }
    return 0;
}