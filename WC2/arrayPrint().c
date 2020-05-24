#include <stdio.h>

void arrayPrint(FILE *out, int array[], int size) {
    int limit = size - 1;
    
    for ( int counter = 0; counter < limit; counter++ ) {
        fprintf(out, "%d ", array[counter]);
    }
    fprintf(out, "%d\n", array[limit]);
}


int main() {
    int size = 10;
    int array[size];
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    for ( int i = 0; i < size; i++){
        fscanf(in, "%d", &array[i]);
    }
    arrayPrint(out, array, size);
    
    return 0;
}