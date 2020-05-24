#include <stdio.h>

#define SIZE 100

int main() {
    char str[SIZE+1];
    int size = 0;
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    if ( fscanf(in, "%100s", str) <= 0 ) {
        size = 0;
    } else {
        for ( ; str[size] != '\0'; size++ );
    }
    fprintf(out, "%d\n", size);
    return 0;
}
