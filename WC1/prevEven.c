#include <stdio.h>

int main() {
    int input;
    
    scanf("%d", &input);
    if ( input % 2 != 0 ) {
        printf("%d\n", input-1);
    } else {
        printf("%d\n", input);
    }
    return 0;
}
