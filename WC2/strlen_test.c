#include <stdio.h>

#define SIZE 100

int strLen(int size, FILE *in) {
    char str[size];
    int length = 0;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    if ( fscanf(in, "%s", str) <= 0 ) {
        fprintf(out, "0\n");
        return 0;
    }
    for ( ; str[length] != '\0'; length++ );
    for ( int counter = 0; counter < size; counter++ ) {
    printf("str[%d] = %c\n", counter, str[counter]);
    }
    return length;
}

int main() {
    char temp;
    int size = 0;
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    for ( ; size < SIZE + 1 && fscanf(in, "%c", &temp) != EOF; size++ );
    fprintf(out, "%d\n", strLen(size-1, in));
    return 0;
}
