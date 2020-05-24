#include <stdio.h>
//Square
int main() {
    int size;
    
    scanf("%d", &size);
    
    for ( int i = 0, counter = 1, limit = size - 1; i < size; i++ ) {
        for ( int j = 0; j < limit; j++) {
            printf("%d ", counter);
            counter += 1;
        }
        printf("%d\n", counter);
        counter += 1;
    }
    printf("\n");
   
//Triangle
    for ( int i = 0, counter = 1; i < size; i++ ) {
        for ( int j = 0; j < i; j++) {
            printf("%d ", counter);
            counter += 1;
        }
        printf("%d\n", counter);
        counter += 1;
    }
    printf("\n");
    return 0;
}