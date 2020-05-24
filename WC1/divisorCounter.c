#include <stdio.h>

int main() {
    int input;
    int quantity = 0;
    
    scanf("%d", &input);
    
    for ( int i = 1; i <= input; i++ ) {
        if ( input % i == 0 ) {
            quantity += 1;
        }
    }
    
    printf("%d\n", quantity);
    
    return 0;
}
