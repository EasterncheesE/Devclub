#include <stdio.h>

int isPrimeCycle(int n) {
    if ( n < 2 ) {
        return 0;
    } else {
        for ( int b = 2; b <= n / 2; b++ ) {
            if ( n % b == 0 ) {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
        return 1;
    }
}

int main() {
    int input;
    int selector = 2;
    
    scanf("%d", &input);
    
        isPrimeCycle(input);
    
    return 0;
}