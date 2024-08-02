int array_min(int integers[], int length){
    if (length < 1){
        return -1;
    }
    int min = integers[0];
    for (int i = 0; i < length; i++){
        if (min > integers[i]){
            min = integers[i];
        }
    }
    return min;
}
int array_max(int integers[], int length){
    if (length < 1){
        return -1;
    }
    int max = integers[0];
    for (int i = 0; i < length; i++){
        if (max < integers[i]){
            max = integers[i];
        }
    }
    return max;
}
int sum_min_max(int integers[], int length){
    int max = array_max(integers, length);
    int min = array_min(integers, length);
    int sum = min + max;
    return sum;
}