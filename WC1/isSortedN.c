#include <stdio.h>

int main() {
    int quantity;
    int number;
    int min;
    
    scanf("%d\n%d", &quantity, &number);
    
    min = number;
    
    for ( int i = 0, limit = quantity - 1; i < limit; i++ ) {
        scanf("%d", &number);
        if ( min > number ) {
            printf("no\n");
            return 0;
        } else {
            min = number;
        }
    }
    printf("yes\n");
    
    return 0;
}
