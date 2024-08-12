void hexDigits(int *numbers,int length);
int main(){
    int numbers[] = {1,2,14,12,5,1,7,9,12,51};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    hexDigits(numbers, length);
    return 0;
}