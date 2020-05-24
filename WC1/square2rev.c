#include <stdio.h>

int main() {
    int size, counter;
    
    scanf("%d", &size);
    
    counter = size * size - size;
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 1; j < size; j++ ) {
            counter += 1;
            printf("%d ", counter);
        }
        counter += 1;
        printf("%d\n", counter);
        counter = counter - size * 2;
    }
    
    return 0;
}
