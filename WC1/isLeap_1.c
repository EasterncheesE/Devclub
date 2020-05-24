#include <stdio.h>

int main() {
    int days;
    
    scanf("%d", &days);
    
    if ( days != 366 && days != 365 ) {
        printf("Invalid param\n");
    } else if ( days == 366 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
