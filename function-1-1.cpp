double arrayMin(double* array, int size){
    array = new double[size];
    double min = array[0];
    for (int i = 0; i < size; i++){
        if (min > array[i]){
            min = array[i];
        }
    }
    return min;
}