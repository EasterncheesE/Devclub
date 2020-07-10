#include <stdio.h>

#define SHIFT 6

void arrayShift(int array[], int size, int shift) {
    int buffer = size / 2;
    int arrayShift[buffer];
    
    shift %= size;
    
    if ( shift < 0 ) {
        shift += size;
    }
    if ( shift <= buffer ) {
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
        for ( int i = size - 1 - shift; i >= 0; i-- ) {
            arrayShift[i] = array[i];
        }
        for ( int i = 0, j = size - shift; i < shift; i++, j++ ) {
            array[i] = array[j];
        }
        for ( int i = size - 1, j = i - shift; j >= 0; i--, j-- ) {
            array[i] = arrayShift[j];
        }
    }
}


int main() {
    int size = 10;
    int array[size];
    int shift = SHIFT;
    
    for ( int counter = 0; counter < size; counter++ ) {
        array[counter] = counter;
        printf("BF Array = %d\n", array[counter]);
    }
    printf("\n");
    arrayShift(array, size, shift);
    

    return 0;
}
