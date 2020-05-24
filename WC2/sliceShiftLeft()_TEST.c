#include <stdio.h>

void sliceShiftLeft(int array[], int start, int end, int size) {
    int buffer;
    
    if ( start >= end || start < 1 ) {
        return;
    }
    buffer = array[start-1];
    for ( int counter = start; counter < end; counter++ ) {
        array[counter-1] = array[counter];
        printf("FN_ARRAY[%d] = %d\n", counter-1, array[counter-1]);
    }
    array[end-1] = buffer;
    printf("\n\n");
    for ( int counter = 0; counter < size; counter++ ) {
        printf("FN_ARRAY[%d] = %d\n", counter, array[counter]);
    }
}

int main() {
    int size = 15;
    int array[size];
    int start = 3;
    int end = 5;
    
    for (int counter = 0; counter < size; counter++ ) {
        array[counter] = counter;
        printf("ARRAY[%d] = %d\n", counter, array[counter]);
    }
    sliceShiftLeft(array, start, end, size);
    
    return 0;
}
