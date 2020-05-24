#include <stdio.h>

int main() {
    unsigned int speed, limit;
    
    scanf("%d %d", &speed, &limit);
    
    if ( speed > limit ) {
        printf("violation\n");
    } else {
        printf("ok\n");
    }
    
    return 0;
}
