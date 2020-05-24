#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int i = 0, limit = size - 1; i < size; i++ ) {
        for ( int j = 1; j <= limit; j++ ) {
            printf("%d ", j);
        }
        printf("%d\n", size);
    }
    return 0;
}