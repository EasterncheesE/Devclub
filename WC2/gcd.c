#include <stdio.h>

int gcdCYCLE(int a, int b) {
    for ( ; a != 0 && b != 0; ) {
        if ( a > b ) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    return a + b;
}

int gcdREC(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b, c;
    
    scanf("%d %d", &a, &b);
    
    // for ( ; a != 0 && b != 0; ) {
    //     if ( a > b ) {
    //         a = a % b;
    //         printf("A IS: %d\n", a);
    //     } else {
    //         b = b % a;
    //         printf("B IS: %d\n", b);
    //     }
    // }
    
    c = gcd(a, b);
    
    printf("\n C IS: %d\n", c);
    return 0;
}
