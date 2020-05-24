#include <stdio.h>

#define FIVE 5

int main() {
    int min, max;
    int remainder;
    
    scanf("%d %d", &min, &max);
    remainder = min % FIVE;
    
    if ( remainder > 0 ) {
        min += FIVE;
    }
    min -= remainder;
    
    for ( ; min <= max; min += FIVE ) {
        printf("%d\n", min);
    }
    return 0;
}
