#include <stdio.h>

int fibonacci(int input) {
    int fib1 = 0;
    int fib2 = 1;
    int nextFib;
    
    for ( int i = 1; i < input; i++ ) {
        nextFib = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextFib;
    }
    return fib2;
}

int main() {
    int input;
    int fib[100];
    
    for ( int i = -46, j = 0; i < 47; i++, j++ ) {
        fib[j] = i;
        printf("%d ", fib[j]);
    }
    printf("\n");
    
    for ( int i = 0; fib[i] < 48; i++ ) {
        if ( fib[i] < 0 ) {
            fib[i] = -fib[i];
            if ( fib[i] % 2 == 0 ) {
                fib[i] = -fibonacci(fib[i]);
            } else {
                fib[i] = fibonacci(fib[i]);
            }
        } else {
            fib[i] = fibonacci(fib[i]);
        }
    }
    
    for ( int i = -46, j = 0; i < 47; i++, j++ ) {
        printf("%d = %d\n", i, fib[j]);
    }
    
    return 0;
}
