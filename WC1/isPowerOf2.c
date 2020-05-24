#include <stdio.h>

int main() {
    int input, counter;
    
    scanf("%d", &input);
    
    for ( counter = 1; counter < input / 2; counter *= 2 );
    if ( input % counter == 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}
