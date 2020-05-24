#include <stdio.h>

int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int row = 0, counter = 1; row < size; row++ ) {
        for ( int column = 1; column < size; column++ ) {
            printf("%d ", counter);
            counter += 1;
        }
        printf("%d\n", counter);
        counter += 1;
    }
    
    return 0;
}
