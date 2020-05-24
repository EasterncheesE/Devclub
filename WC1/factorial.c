#include <stdio.h>

int main() {
    int input;
    int factorial = 1;
    
    scanf("%d", &input);
    
    if ( input < 0 ) {
        printf("-1\n");
        return 0;
    }
    for ( int i = 1; i <= input; i++ ) {
        factorial *= i;
    }
    printf("%d\n", factorial);
    
    return 0;
}
