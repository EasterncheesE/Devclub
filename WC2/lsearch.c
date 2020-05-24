#include <stdio.h>

int lsearch(int size) {
    int needle;
    int array[size];
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    fscanf(in, "%d", &needle);
    for ( int counter = 0; counter < size; counter++ ) {
        fscanf(in, "%d", &array[counter]);
        if ( array[counter] == needle ) {
            fprintf(out, "%d\n", counter);
            return 0;
        }
    }
    fprintf(out, "-1\n");
    return 0;
}

int main() {
    int size = 0;
    FILE *in;
    
    in = fopen("task.in", "r");
    for ( int x; fscanf(in, "%d", &x) != -1 && size <= 99; size++ );
    fclose(in);
    lsearch(size);
    return 0;
}
