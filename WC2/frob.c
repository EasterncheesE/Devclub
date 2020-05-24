Wrong idea

#include <stdio.h>

void arrayScan(int array[], int size) {
    for ( int counter = 0; counter < size; counter++ ) {
        array[counter] = counter;
        printf("%d\n", array[counter]);
        printf("SIZE IS: %d\n", size);
    }
}

void printArray(int array[], int size) {
    for ( int counter = 0; counter < size; ) {
        printf("SIZE IS %d\n", size);
        printf("%d\n", array[counter]^42);
        counter += 1;
    }
}

int main() {
    int size = 0;
    int array[1];
    
    scanf("%d", &size);
    arrayScan(array, size);
    printf("SIZE2 IS: %d\n", size);
    printArray(array, size);
    
    return 0;
}
