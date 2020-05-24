#include <stdio.h>

#define SIZE 20

int arrayUnique(int array[], int size) {
    int len = size;
    
    for ( int i = 0; i < len; i++ ) {
        int buffer = array[i];
        
        printf("\nI = %d\n", i);
        for ( int j = i + 1; j < len; ) {
            printf("J = %d\n", j);
            if ( array[j] == buffer ) {
                for ( int k = j, l = j + 1; l < size; k++, l++ ) {
                    array[k] = array[l];
                }
                array[size-1] = buffer;
                len -= 1;
                printf("Len = %d", len);
                printf("\n");
                for ( int i = 0; i < size; i++ ) {
                    printf("Cycle A[%d] = %d\n", i, array[i]);
                }
            } else {
                j += 1;
            }
        }
    }
    for ( int i = 0; i < size; i++ ) {
        printf("Cycle A[%d] = %d\n", i, array[i]);
    }
    printf("\nFINAL LEN IS %d\n", len);
    return len;
}

int main() {
    int size = SIZE;
    int array[SIZE] = {1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,0,10};
    
    printf("HERE WE START OUR FUCKING PROGRAM!!!!RARARARARARARARARARARARARARRARARARARARARARARARRA\n\n\n");
    for ( int i = 0; i < size; i++ ) {
        printf("A[%d] = %d\n", i, array[i]);
    }
    printf("\n\n");
    arrayUnique(array, size);
    
    
    return 0;
}
