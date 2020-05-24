#include <stdio.h>

int main() {
    int dividend, divisor, multiple;
    
    scanf("%d %d", &dividend, &divisor);
    
    if ( divisor < 0 ) {
        divisor = -divisor;
    }
    
    multiple = dividend - dividend % divisor;
    
    if ( multiple < dividend ) {
        printf("%d\n", multiple+divisor);
    } else {
        printf("%d\n", multiple);
    }
    
    return 0;
}
