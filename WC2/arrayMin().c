int arrayMin(int array[], int size) {
    int min = array[0];
    
    for ( int counter = 1; counter < size; counter++ ) {
        if ( min > array[counter] ) {
            min = array[counter];
        }
    }
    return min;
}
