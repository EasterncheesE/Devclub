#include <stdio.h>

void sliceShiftLeft(int array[], int start, int end) {
    int buffer = array[start];
    
    for ( int counter = start; counter < end; counter++ ) {
        array[counter] = array[counter+1];
    }
    if ( start < end ) {
        array[end] = buffer;
    }
}


int main() {
    int size = 5;
    int array[] = {1, 2, 3, 4, 5};
    int start = 1;
    int end = 3;
    
    for (int counter = 0; counter < size; counter++ ) {
        // array[counter] = counter;
        printf("ARRAY[%d] = %d\n", counter, array[counter]);
    }
    sliceShiftLeft(array, start, end);
    
    return 0;
}
