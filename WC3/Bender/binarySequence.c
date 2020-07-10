#include <stdio.h>

int binarySequence(FILE *in) {
    int buffer;
    int zeros = 0;
    int exchanges = 0;
    
    for ( ; fscanf(in,"%1d", &buffer) != EOF; ) {
        if ( buffer == 0 ) {
            zeros += 1;
        }
    }
    rewind(in);
    for ( int i = 0; i < zeros; i++ ) {
        fscanf(in, "%1d", &buffer);
        if ( buffer != 0 ) {
            exchanges += 1;
        }
    }
    return exchanges;
}

int main(void) {
    FILE *in;
    FILE *out;

    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    
    fprintf(out, "%d\n", binarySequence(in));
    
  return 0;
}
