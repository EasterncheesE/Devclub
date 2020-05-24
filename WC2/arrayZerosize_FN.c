#include <stdio.h>

void arrayZeroFill(int array[], int size) {
    for ( int i = 0; i < size; i++) {
        array[i] = 0;
        printf("%d ", array[i]);
    }
}


int main() {
    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = 10;
    arrayZeroFill(array, size);
    
    return 0;
}
