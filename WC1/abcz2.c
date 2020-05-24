#include <stdio.h>

int main() {
    int input;
    int marker = 1;
    
    scanf("%d", &input);
    
    if ( input % 2 == 0 ) {
        printf("alpha\n");
        marker = 0;
    }
    if ( input % 3 == 0 ) {
        printf("bravo\n");
        marker = 0;
    }
    if ( input % 5 == 0 ) {
        printf("charlie\n");
        marker = 0;
    }
    if ( marker == 1 ) {
        printf("zulu\n");
    }
    
    return 0;
}
