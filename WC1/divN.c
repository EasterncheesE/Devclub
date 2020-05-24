#include <stdio.h>

int main() {
    int min, max, divisor;
    int remainder;
    
    scanf("%d %d %d", &min, &max, &divisor);
    
    remainder = min % divisor;
    
    if ( remainder > 0 ) {
        min += divisor;
    }
    min -= remainder;
    
    for ( ; min <= max; min += divisor ) {
        printf("%d\n", min);
    }
    
    return 0;
}
