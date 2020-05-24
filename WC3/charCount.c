#include <stdio.h>

#define ALPHABET 26

int main() {
    char temp;
    int letters[ALPHABET];
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    
    for ( int i = 0; i < ALPHABET; i++ ) {
        letters[i] = 0;
    }
    for ( ; fscanf(in, "%c", &temp) != -1; ) {
        if ( temp > 64 && temp < 91 ) {
            letters[temp-65] += 1;
        } else if ( temp > 96 && temp < 123 ) {
            letters[temp-97] += 1;
        }
    }
    for ( int i = 0; i < ALPHABET; i++ ) {
        if ( letters[i] != 0 ) {
            fprintf(out, "%c %d\n", i+97, letters[i]);
        }
    }
    
    return 0;
}
