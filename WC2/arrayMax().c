int arrayMax(int array[], int size) {
    int max = array[0];
    
    for ( int counter = 1; counter < size; counter++ ) {
        if ( max > array[counter] ) {
            max = array[counter];
        }
    }
    return max;
}
