#include <stdio.h>

void absolute(int size, FILE *in, FILE *out) {
    int array[size];
    int limit = size - 1;
    
    for ( int counter = 0; counter <= limit; counter++ ) {
        fscanf(in, "%d", &array[counter]);
        if ( array[counter] < 0 ) {
            array[counter] = -array[counter];
        }
    }
    for ( int counter = 0; counter < limit; counter++ ) {
        fprintf(out, "%d ", array[counter]);
    }
    fprintf(out, "%d\n", array[limit]);
}

int main() {
    int size;
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    fscanf(in, "%d", &size);
    absolute(size, in, out);
    
    return 0;
}
