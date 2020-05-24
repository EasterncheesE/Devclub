void arrayShiftLeft(int array[], int size) {
    int shift = array[0];
    
    for ( int counter = 1; counter < size; counter++ ) {
        array[counter-1] = array[counter];
    }
    array[size-1] = shift;
}
