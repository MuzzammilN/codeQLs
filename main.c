int getValueFromArray(int *array, int len, int index) {
    if (index >= 0 && index < len) {
        return array[index];
    }
    return -1; 
}
