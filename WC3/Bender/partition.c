int partition(int array[], int lo, int hi) {
    int tail = lo;
    int mid = (lo + hi) / 2;
    int pivot = array[mid];
    
    array[mid] = array[hi];
    array[hi] = pivot;
    
    for ( ; array[tail] < array[hi]; tail++ );
    for ( int i = tail + 1; i < hi; i++ ) {
        if ( array[i] < array[hi] ) {
            pivot = array[tail];
            
            array[tail] = array[i];
            array[i] = pivot;
            tail += 1;
        }
    }
    pivot = array[hi];
    array[hi] = array[tail];
    array[tail] = pivot;
    
    return tail;
}
