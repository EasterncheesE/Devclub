#include <stdio.h>

#define TWO 2

int main() {
    int input;
    int square = 1;
    
    scanf("%d", &input);
    
    for ( int i = 1; i <= input; i++ ) {
        printf("%d ", square);
        square *= TWO;
    }
    printf("%d\n", square);
    
    return 0;
}
