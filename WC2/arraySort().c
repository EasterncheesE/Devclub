// Оба решения рабочие. С рекурсией мне нравится больше.
#include <stdio.h>

void arraySort(int array[], int size) {
    for ( int counter = 0; counter < size - 1; counter++ ) {
        int buffer = array[counter];
        
        if ( array[counter] > array[counter+1] ) {
            array[counter] = array[counter+1];
            array[counter+1] = buffer;
            arraySort(array, size);
        }
    }
}

// void arraySort(int array[], int size) {
//     int buffer = array[0];
    
//     for ( int counter = 0; counter < size; counter++ ) {
//         for ( int j = counter + 1; j < size; j++ ) {
//             if ( array[counter] > array[j] ) {
//                 buffer = array[counter];
//                 array[counter] = array[j];
//                 array[j] = buffer;
//             }
//         }
//     }
// }

// void arraySort(int array[], int size) {
//     for ( int counter = 0; counter < size; counter++ ) {
//         int buffer = array[counter];
//         int i;
        
//         for ( int j = counter + 1; j < size; j++ ) {
//             if ( buffer > array[j] ) {
//                 buffer = array[j];
//                 i = j;
//             }
//         }
//         array[i] = array[counter];
//         array[counter] = buffer;
//     }
// }

int main() {
    int size = 150000000;
    int array[size];
    
    for (int counter = size-1; counter >= 0; counter--) {
        array[counter] = counter;
    }
    // for ( int counter = 0; counter < size; counter++ ) {
    //     printf("BEF FN array[%d] = %d\n", counter, array[counter]);
    // }
    printf("\n\n");
    arraySort(array, size);
    printf("%d %d %d %d %d %d %d %d %d %d %d\n", array[0], array[14000000], array[29000000], array[44000000], array[59000000], array[74000000], array[89000000], array[104000000], array[119000000], array[134000000], array[149000000]);
    // for ( int counter = 0; counter < size; counter++ ) {
    //     printf("AFT FN array[%d] = %d\n", counter, array[counter]);
    // }
    return 0;
}