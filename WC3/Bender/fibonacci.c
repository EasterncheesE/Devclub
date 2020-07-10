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
    
    scanf("%d", &input);
    if ( input > 46 || input < -46 ) {
        return 0;
    }
    if ( input == 0 ) {
        printf("0\n");
        return 0;
    }
    if ( input < 0 ) {
        input = -input;
        if ( input % 2 == 0 ) {
            printf("-%d\n", fibonacci(input));
        } else {
            printf("%d\n", fibonacci(input));
        }
    } else {
        printf("%d\n", fibonacci(input));
    }
    
    return 0;
}
