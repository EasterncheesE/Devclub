//Code works

#include <stdio.h>

int main() {
    int x;
    
    scanf("%d", &x);
    
    if ( x % 2 == 0 ) {
        printf("%d\n", x);
    } else {
        printf("%d\n", x+1);
    }
    
    return 0;
}
