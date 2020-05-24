#include <stdio.h>

int main() {
    int size, counter;
    
    scanf("%d", &size);
    
    for ( ; size > 0; size-- ) {
        counter = (1 + size) * size / 2 - size;
        for ( int row = 1; row < size; row++ ) {
            counter += 1;
            printf("%d ", counter);
        }
        counter += 1;
        printf("%d\n", counter);
    }
    
    return 0;
}
