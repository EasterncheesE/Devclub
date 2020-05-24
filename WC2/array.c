#include <stdio.h>

int main() {
    int size = 10;
    int array[size];
    int limit = size - 1;
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    
    for ( int counter = 0; counter < limit; counter++ ) {
        fscanf(in, "%d", &array[counter]);
        fprintf(out, "%d ", array[counter]);
    }
    fscanf(in, "%d", &array[limit]);
    fprintf(out, "%d\n", array[limit]);
    fclose(in);
    fclose(out);
    
    return 0;
}
