#include <stdio.h>

void strRot13(char str[]) {
    for ( char *p = str; *p != '\0'; p++ ) {
        if ( *p > 64 && *p < 78 ) {
            *p += 13;
        } else if ( *p > 96 && *p < 110 ) {
            *p += 13;
        } else if ( *p > 77 && *p < 91 ) {
            *p -= 13;
        } else if ( *p > 109 && *p < 123 ) {
            *p -= 13;
        }
    }
}

int main() {
    char str[101];
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    fscanf(in, "%100s", str);
    strRot13(str);
    fprintf(out, "%s\n", str);
    return 0;
}
