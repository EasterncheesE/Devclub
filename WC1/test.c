#include <stdio.h>

int main() {
    int a, b, c;
    int marker;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if ( a + b > c) {
        printf("alpha\n");
        marker = 0;
    } else if ( a < b - c ) {
        printf("bravo\n");
        marker = 0;
    } else if ( a % c == 0) {
        printf("charlie\n");
        marker = 0;
    } else if ( marker == 1 ) {
        printf("zulu\n");
    }
    
    return 0;
}
