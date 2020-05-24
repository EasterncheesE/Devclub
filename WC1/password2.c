#include <stdio.h>

int main() {
    int password;
    int correctPass = 1488;
    int tries = 5;
    
    for ( int i = 0; i < tries; i++ ) {
        scanf("%d", &password);
        if ( password == correctPass ) {
            printf("accepted\n");
            return 0;
        } else if ( i < tries ) {
            printf("incorrect password\n");
        }
    }
    
    scanf("%d", &password);
    if ( password == correctPass ) {
        printf("accepted\n");
    } else {
        printf("denied\n");
    }
    
    return 0;
}
