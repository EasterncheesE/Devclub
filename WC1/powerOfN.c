#include <stdio.h>

int main() {
    int base, exponent;
    int counter = 1;
    
    scanf("%d %d", &base, &exponent);
    
    for ( int i = 1; i <= exponent; i++ ) {
        printf("%d ", counter);
        counter *= base;
    }
    printf("%d\n", counter);
    return 0;
}
