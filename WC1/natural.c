#include <stdio.h>

int main() {
    int input, counter;
    
    scanf("%d", &input);
    
    for ( counter = 1; counter < input; counter++ ) {
        printf("%d ", counter);
    }
    printf("%d\n", input);
    
    return 0;
}
