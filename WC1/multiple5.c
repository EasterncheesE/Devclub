#include <stdio.h>

int main() {
    int input;
    
    scanf("%d", &input);
    
    input = input / 5 * 5;
    for ( int i = 0; i < input; i += 5 ) {
        printf("%d ", i);
    }
    
    printf("%d\n", input);
    
    return 0;
}
