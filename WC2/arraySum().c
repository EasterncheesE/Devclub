int arraySum(int array[], int size) {
    int result = array[0];
    
    for ( int counter = 1; counter < size; counter++ ) {
        result += array[counter];
    }
    return result;
}
