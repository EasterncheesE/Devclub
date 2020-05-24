#include <stdio.h>

void arrayReverse(int array[], int size) {
    for ( int counter = 0, countdown = size - 1; counter < countdown; counter++, countdown-- ) {
        int buffer = array[counter];
        
        array[counter] = array[countdown];
        array[countdown] = buffer;
    }
}

int main() {
    int size = 11;
    int array[size];
    
    for ( int i = 0; i < size; i++ ) {
        array[i] = i;
        printf("MAIN array[%d] = %d\n", i, array[i]);
    }
    
    arrayReverse(array, size);
    
    return 0;
}
