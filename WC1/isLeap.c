#include <stdio.h>

int main() {
    int days;
    
    scanf("%d", &days);
    
    if ( days == 366 ) {
        printf("yes\n");
    }
    if ( days == 365 ) {
        printf("no\n");
    }
    if ( days != 366 && days != 365 ) {
        printf("Invalid param\n");
    }
    
    return 0;
}
    