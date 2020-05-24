#include <stdio.h>

int main() {
    int input;
    int counter = 0;
    
    scanf("%d", &input);
    
    if ( input < 0 ) {
        input = -input;
        counter += 1;
    }
    if ( input == 0 ) {
        printf("1\n");
        return 0;
    }
    
    for ( ; input > 0; input /= 10 ) {
            counter += 1;
    }
    printf("%d\n", counter);
    
    return 0;
}
