void arrayShift(int array[], int size, int shift) {
    int buffer = size / 2;
    
    shift %= size;
    
    if ( shift == 0 ) {
        return;
    }
    if ( shift < 0 ) {
        shift += size;
    }
    if ( shift <= buffer ) {
        int arrayShift[buffer];
        
        for ( int i = 0, j = size - shift; i < shift; i++, j++ ) {
            arrayShift[i] = array[j];
        }
        for ( int i = size - 1, j = i - shift; i >= shift; i--, j-- ) {
            array[i] = array[j];
        }
        for ( int i = 0; i < shift; i++ ) {
            array[i] = arrayShift[i];
        }
    } else {
        int arrayShift[buffer];
        
        for ( int i = 0, j = size - shift; i < j; i++ ) {
            arrayShift[i] = array[i];
        }
        for ( int i = 0, j = size - shift; i < shift; i++, j++ ) {
            array[i] = array[j];
        }
        for ( int i = shift, j = 0; i < size; i++, j++ ) {
            array[i] = arrayShift[j];
        }
    }
}
