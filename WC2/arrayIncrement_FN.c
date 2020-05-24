#include <stdio.h>


void arrayIncrement( int array[], int size, int increment) {
    for ( int i = 0; i < size; i++ ) {
        array[i] += increment;
    }
}

int main() {
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size, increment;
    
    scanf("%d %d", &size, &increment);
    
    arrayIncrement(array, size, increment);
    
    printf("%d", array);
    
    return 0;
}