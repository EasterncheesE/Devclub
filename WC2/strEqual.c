#include <stdio.h>

#define SIZE 100

int strEqual(char str1[], char str2[]) {
    for ( int i = 0; str1[i] == str2[i]; i++ ) {
        if ( str1[i] == '\0' ) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char str1[SIZE+1];
    char str2[SIZE+1];
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    fscanf(in, "%100s", str1);
    fscanf(in, "%100s", str2);
    if ( strEqual(str1, str2) == 1 ) {
        fprintf(out, "yes\n");
        return 0;
    }
    fprintf(out, "no\n");
    return 0;
}
