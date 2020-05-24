#include <stdio.h>

int main() {
    int input;
    
    scanf("%d", &input);
    
    if ( input % 2 == 0 ) {
        input -= 1;
    }
    for ( int i = 1; i < input; i += 2 ) {
        printf("%d ", i);
    }
    
    printf("%d\n", input);
    
    return 0;
}
