#include <stdio.h>

#define TWO 2

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min % TWO != 0 ) {
        min += 1;
    }
    if ( max % TWO != 0 ) {
    max -= 1;
    }
    
    for ( ; min < max; min += TWO ) {
        printf("%d ", min*min);
    }
    printf("%d\n", min*min);
    
    return 0;
}
