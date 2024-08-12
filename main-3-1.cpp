bool equalsArray(int *numbers1,int *numbers2,int length);
int* readNumbers();
void printNumbers(int* array, int length);
int main(void){
    int* array1 = readNumbers();
    int* array2 = readNumbers();
    int length = 10;
    equalsArray(array1, array2, length);


    delete[] array1;
    delete[] array2;
    return 0;
}