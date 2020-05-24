#include <stdio.h>

int main() {
    int counter = 0;
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    
    for ( int i = 0, temp = 0; i < 100; i++ ) {
        if ( fscanf(in, "%d", &temp) > 0 ) {
            counter += 1;
        }
    }
    fprintf(out, "%d\n", counter);
    printf("%d\n", counter);
    return 0;
}
