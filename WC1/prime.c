#include <stdio.h>

int isPrime(int number) {
    for ( int i = 2; i <= number / 2; i++ ) {
        if ( number % i == 0 ) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int input;
    int result = 2;
    
    scanf("%d", &input);
    
    if ( input < 1 ) {
        printf("-1\n");
    } else {
        for ( int number = 2, limit = 1; limit <= input; number++ ) {
            if ( isPrime(number) == 1 ) {
                limit += 1;
                result = number;
            }
        }
        printf("%d\n", result);
    }
    
    return 0;
}
