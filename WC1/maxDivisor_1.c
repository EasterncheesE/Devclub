#include <stdio.h>

int main() {
    int dividend;
    
    scanf("%d", &dividend);
    
    for ( int i = dividend / 2; i > 1; i-- ) {
        if ( dividend % i == 0 ) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");
    
    return 0;
}
