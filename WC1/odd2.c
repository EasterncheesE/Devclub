#include <stdio.h>

int main() {
    int odd, max;
    
    scanf("%d %d", &odd, &max);
    
    if ( odd % 2 == 0 ) {
        odd += 1;
    }
    if ( max % 2 == 0 ) {
        max -= 1;
    }
    
    for ( ; odd < max; odd += 2 ) {
        printf("%d ", odd);
    }
    printf("%d\n", odd);
    
    return 0;
}
