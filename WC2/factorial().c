#include <stdio.h>

int factorial(int n) {
    if ( n > 1 ) {
        return factorial(n-1) * n;
    } else if ( n < 0 ) {
        return -1;
    }
    return 1;
}

int main() {
    int n;
    
    scanf("%d", &n);
    // if ( n < 0 ) {
    //     printf("-1\n");
    //     return 0;
    // } else if ( n == 0 ) {
    //     printf("1\n");
    //     return 1;
    // }
    
    n = factorial(n);
    printf("N IS: %d\n", n);
    return 0;
}
