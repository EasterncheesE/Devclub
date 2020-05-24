#include <stdio.h>

int main() {
    int member, step, quantity;
    
    scanf("%d %d %d", &member, &step, &quantity);
    
    for ( int i = quantity - 1; i > 0; member += step, i-- ) {
        printf("%d ", member);
    }
    printf("%d\n", member);
    
    return 0;
}
