#include <stdio.h>

int gcd(int m, int n) {
    if ( n == 0 ) {
        return m;
    }
    return gcd(n, m%n);
}

int main() {
    int min, max, m, n, temp;
    
    scanf("%d %d %d %d", &min, &max, &m, &n);
    
    if ( m == 0 || n == 0 ) {
        printf("0\n");
        return 0;
    }
    
    temp = (m * (n / gcd(m, n)));
    if ( min % temp > 0 ) {
        min = (min - min % temp) + temp;
    } else {
        min = min - min % temp;
    }
    for ( ; min <= max; min += temp ) {
        printf("%d\n", min);
    }
    return 0;
}
