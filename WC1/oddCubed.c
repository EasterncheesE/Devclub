#include <stdio.h>

int main() {
    int min, max, result;
    
    scanf("%d %d", &min, &max);
    
    if ( min % 2 == 0 ) {
        min += 1;
    }
    if ( max % 2 == 0 ) {
        max -= 1;
    }
    
    for ( ; min < max; min += 2 ) {
        result = min * min * min;
        printf("%d ", result);
    }
    result = min * min * min;
    printf("%d\n", result);
    return 0;
}
