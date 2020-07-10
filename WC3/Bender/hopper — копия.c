#include <stdio.h>

#define MAX 100

int main() {
    int maxJump;
    int cell;
    unsigned long long ways[MAX];
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    
    fscanf(in, "%d %d", &maxJump, &cell);
    fclose(in);
    
    if ( maxJump > cell ) {
        maxJump = cell;
    }
    for ( int i = 0; i < maxJump; i++ ) {
        ways[i] = 1 << i;
    }
    for ( int i = maxJump; i < cell; i++ ) {
        unsigned long long way = 0;
        
        for ( int j = i - maxJump; j < i; j++ ) {
            way += ways[j];
        }
        ways[i] = way;
    }
    fprintf(out, "%llu\n", ways[cell-1]);
    fclose(out);
    
    return 0;
}
