#include <stdio.h>

int main() {
    int a;
    
    scanf("%d", &a);
    
    for ( int i = 1, counter = 1; i < a ; i-- ) {
        printf("%d ", counter);
        counter += 1;
    }
    printf("\n");
    
    return 0;
}
