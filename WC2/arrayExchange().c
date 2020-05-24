#include <stdio.h>

void arrayExchange(int array[], int len) {
    for ( int counter = 0; counter <= len - 2; counter += 2 ) {
        int buffer = array[counter];
        
        array[counter] = array[counter+1];
        array[counter+1] = buffer;
    }
}


int main() {
    int size = 16;
    int array[size];
    
    for ( int counter = 0; counter < size; counter++ ) {
        array[counter] = counter;
        printf("Array[%d] = %d\n", counter, array[counter]);
    }
    arrayExchange(array, size);
    return 0;
}