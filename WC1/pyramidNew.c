#include <stdio.h>

int main() {
    int total, rows, cols;
    
    scanf("%d %d %d", &total, &rows, &cols);
    
    rows += 1;
    cols += 1;
    
    if ( rows < cols ) {
        rows = cols;
    }
    for ( ; rows <= total; rows++ ) {
        for ( int limit = cols; limit < rows; limit++ ) {
            printf("%d ", limit);
        }
        printf("%d\n", rows);
    }
    return 0;
}
