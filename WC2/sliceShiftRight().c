void sliceShiftRight(int array[], int start, int end) {
    int buffer = array[end];
    
    for ( int counter = end; counter > start; counter-- ) {
        array[counter] = array[counter-1];
    }
    if ( end > start ) {
        array[start] = buffer;
    }
}
