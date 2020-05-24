#include <stdio.h>

int isPrime(int n) {
    for ( int b = 2; b < n / 2; b++ ) {
        printf("I is %d\n", b);
        if ( n % b == 0 ) {
            printf("NOT PRIME\n\n");
            return 0;
        }
    }
    printf("PRIME\n\n");
    return 1;
}

int main() {
    int input, counter;
    int result = 2;
    
    scanf("%d", &input);
    
    if ( input < 1 ) {
        printf("-1\n");
    }
    // for ( int number = 3, limit = 1; limit < input; number++ ) {
    //     printf("number is %d\n", number);
    //     if ( isPrime(number) == 1 ) {
    //         limit += 1;
    //         printf("LIMIT IS %d\n", limit);
    //         result = number;
    //     } 
    // }
    // printf("RESULT IS %d\n", result);
    isPrime(input);
    return 0;
}
