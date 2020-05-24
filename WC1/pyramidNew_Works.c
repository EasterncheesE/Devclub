#include <stdio.h>

int main() {
    int total, rows, cols;
    
    scanf("%d %d %d", &total, &rows, &cols);
    
    for ( int i = rows + 1; i <= total; i++ ) {
        for ( int j = cols + 1; j < i; j++ ) {
            printf("%d ", j);
        }
        if ( i > cols ) {
            printf("%d\n", i);
        }
    }
    return 0;
}
