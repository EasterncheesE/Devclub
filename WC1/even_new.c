#include <stdio.h>

int main() {
    int number;
    int i = 0;
    scanf("%d", &number);
    
    
    for ( int limit = number - 1; i < limit; i += 2 ) {
        printf("%d ", i);
    }
    printf("%d\n", i);
    
    return 0;
}
