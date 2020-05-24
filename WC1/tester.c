#include <stdio.h>

#define THREE 3

int main() {
    int min, max;
    int remainder;
    
    scanf("%d %d", &min, &max);
    
    remainder = min % THREE;
    printf("REMAINDEr = %d\n", remainder);
    
    if ( remainder > 0 ) {
        min += THREE;
    }
    min -= remainder;
    for ( int i = min; i <= max; i += THREE ) {
        printf("%d\n", i);
    }
    
    return 0;
}
