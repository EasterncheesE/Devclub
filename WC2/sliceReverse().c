void sliceReverse(int array[], int lo, int hi) {
    for ( ; lo < hi; lo++, hi-- ) {
        int buffer = array[lo];
        
        array[lo] = array[hi];
        array[hi] = buffer;
    }
}
