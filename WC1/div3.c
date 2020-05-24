#include <stdio.h>

#define THREE 3

int main() {
    int min, max;
    
    scanf("%d %d", &min, &max);
    
    if ( min % THREE > 0 ) {
        min = min - min % THREE;
    } else if ( min % THREE > 0 ) {
        min = min - min % THREE + THREE;
    }
    for ( ; min <= max; min += THREE ) {
        printf("%d\n", min);
    }
    return 0;
}
