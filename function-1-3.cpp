double* duplicateArray(double* array, int size){
    double* arrayTwo = new double[size];
    for (int i = 0; i < size; i++){
        arrayTwo[i] = array[i];
    }
    return arrayTwo;
}