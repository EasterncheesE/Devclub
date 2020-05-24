#include <stdio.h>

int main() {
    int input;
    
    scanf("%d", &input);
    
    input = input / 3 * 3;
    
    for ( int i = 0; i < input; i += 3 ) {
        printf("%d ", i);
    }
    printf("%d\n", input);
    
    return 0;
}
