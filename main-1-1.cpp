int* readNumbers();
void printNumbers(int* array, int length);

int main(void){
    int* array = readNumbers();
    int length = 10;
    printNumbers(array, length);

    delete[] array;
    return 0;
}