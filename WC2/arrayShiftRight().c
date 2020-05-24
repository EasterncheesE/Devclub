#include <stdio.h>

void arrayShiftRight(int array[], int size) {
    int shift = array[size-1];
    
    for ( int counter = size - 1; counter > 0; counter-- ) {
        array[counter] = array[counter-1];
    }
    array[0] = shift;
}

int main() {
    int size = 10;
    int array[size];
    
    for ( int counter = 0; counter < size; counter++ ) {
        array[counter] = counter;
        printf("Array = %d\n", array[counter]);
    }
    arrayShiftRight(array, size);
    return 0;
}