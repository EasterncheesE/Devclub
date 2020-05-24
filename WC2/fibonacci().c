#include <stdio.h>

int fibonacci(int n) {
    if ( n == 1 || n == -1 ) {
        return 1;
    }
    if ( n == 0 ) {
        return 0;
    }
    if ( n < 0 ) {
        return fibonacci(n+2) - fibonacci(n+1);
    }
    return fibonacci(n-2) + fibonacci(n-1);
}


int main() {
    int n;
    scanf("%d", &n);
    
    n = fibonacci(n);
    printf(" n IS: %d\n", n);
    
    return 0;
}
