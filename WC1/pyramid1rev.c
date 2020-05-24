#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int counter = 1; size > 0; size-- ) {
        for ( ; counter < size; counter++ ) {
            printf("%d ", counter);
        }
        printf("%d\n", counter);
        counter = 1;
    }
    return 0;
}
