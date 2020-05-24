#include <stdio.h>

int main() {
    int quantity, number;
    int max;
    
    scanf("%d %d", &quantity, &number);
    
    max = number;
    
    for ( ; quantity > 1; quantity-- ) {
        scanf("%d", &number);
        if ( max < number ) {
            max = number;
        }
    }
    printf("%d\n", max);
    
    return 0;
}
