#include <stdio.h>

int max2(int x, int y, int max) {
    max = x;
    if ( max > y ) {
        return max;
    }
    return y;
    }

int main() {
    int x, y, result;
    
    scanf("%d %d", &x, &y);
    
    result = max2(x,y);
    
    printf("%d", result);
    
    return 0;
}
