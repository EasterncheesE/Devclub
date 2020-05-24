#include <stdio.h>

int main() {
    int qty, time, square;
    
    scanf("%d %d", &qty, &time);
    
    for ( square = 1; square <= time; square++ ) {
        qty *= 2;
        printf("%dh => %d amoeba(s)\n", square, qty);
    }
    
    return 0;
}
