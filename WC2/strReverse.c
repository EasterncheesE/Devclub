#include <stdio.h>

#define SIZE 100

void strReverse(FILE *out, char str[]) {
    int length = 0;
    
    for ( ; str[length] != '\0'; length++ );
    for ( int counter = 0, countdown = length - 1; counter < countdown; counter++, countdown-- ) {
        int buffer = str[counter];
        
        str[counter] = str[countdown];
        str[countdown] = buffer;
    }
    fprintf(out, "%s\n", str);
}

int main() {
    char str[SIZE+1];
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    fscanf(in, "%100s", str);
    strReverse(out, str);
    return 0;
}
