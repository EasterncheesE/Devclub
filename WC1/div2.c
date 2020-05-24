#include <stdio.h>

#define TWO 2

int main() {
    int low, max;
    
    scanf("%d %d", &low, &max);
    
    if ( low % TWO != 0 ) {
        low += 1;
    }
    for ( ; low <= max; low += TWO ) {
        printf("%d\n", low);
    }
    
    return 0;
}
