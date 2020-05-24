#include <stdio.h>

int hopCount(int maxJump, int cell) {
    int count = 0;
    
    for ( int i = maxJump; i > 0; i-- ) {
        int imd = cell;
        
        printf("OC IMD = %d\n", imd);
        for ( int j = maxJump; imd > 0; ) {
            if ( imd % j > 0 ) {
                imd %= j;
                j--;
                printf("IC IMD = %d, j = %d\n", imd, j);
            } else {
                j--;
            }
        }
        count += 1;
    }
    return count;
}


int main() {
    int cell = 5;
    int maxJump = 21;
    int ways;
    FILE *in;
    
    in = fopen("task.in", "r");
    
    // fscanf(in, "%d %d", &maxJump, &cell);
    
    ways = hopCount(maxJump, cell);
    
    printf("Ways = %d\n", ways);
    
    return 0;
}