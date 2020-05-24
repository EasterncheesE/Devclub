#include <stdio.h>

int main() {
    int decimal, base;
    int i = 1;
    
    scanf("%d %d", &decimal, &base);
    
    for ( int limit = decimal / base; i <= limit; i *= base );
    
    for ( ; i > 0; ) {
        printf("%d", decimal/i);
        decimal = decimal % i;
        i /= base;
    }
    printf("\n");
    
    return 0;
}
