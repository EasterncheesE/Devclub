#include <stdio.h>

int main() {
    int dividend = 100;
    int divisor;
    
    scanf("%d", &dividend);
    
    for ( int i = dividend / 2; i > 4; i-- ) {
        // printf("%d\n", i);
        if ( dividend % i == 0 ) {
            for ( int j = i / 2; j % 2 != 0; j-- ) {
                printf("%d\n", i);
                return 0;
        }
        } else {
            printf("0\n");
            return 0;
    }
    }
    return 0;
}
