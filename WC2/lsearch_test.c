#include <stdio.h>


int lsearch( int size) {
    int needle;
    int array[size];
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    fscanf(in, "%d", &needle);
    printf("NEEDLE IS: %d\n", needle);
    
    for ( int counter = 0; counter < size; counter++ ) {
        fscanf(in, "%d", &array[counter]);
        printf("counter is: %d, array[counter] is: %d\n", counter, array[counter]);
        if ( array[counter] == needle ) {
            printf("RESULT FOUND: %d\n", needle);
            fprintf(out, "%d\n", counter);
            return 0;
        }
    }
    printf("-1\n");
    fprintf(out, "-1\n");
}

int main() {
    int size = 0;
    FILE *in;
    
    in = fopen("task.in", "r");
    for ( int x; (fscanf(in, "%d", &x) != -1) && size <= 99; size++ ) {
        printf("SIZE is: %d, VAL is: %d\n", size, x);
    }
    fclose(in);
    lsearch(size);
    return 0;
}