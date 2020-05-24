#include <stdio.h>

int main() {
    char symbol;
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    for ( int counter = 0; fscanf(in, "%c", &symbol) != -1; counter++ ) {
        if ( symbol >= 97 && symbol <= 122 ) {
            symbol -= 32;
        }
        fprintf(out, "%c", symbol);
    }
    fprintf(out, "\n");
    return 0;
}
