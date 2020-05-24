int arraySearch(int array[], int size, int needle) {
    for ( int counter = 0; counter < size; counter++ ) {
        if ( array[counter] == needle ) {
            return counter;
        }
    }
    return -1;
}
