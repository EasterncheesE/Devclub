#include <stdio.h>

int gcd(int m, int n) {
    if ( n == 0 ) {
        return a;
    }
    return gcd(n, m%n);
}

int main() {
    int min, max, m, n, temp;
    
    scanf("%d %d %d %d", &min, &max, &m, &n);
    
    temp = (m * (n / gcd(m, n)));
    if ( min > 0 ) {
        min = (min - min % temp) + temp;
    } else {
        min = min - min % temp;
    }
    for ( ; min <= max; min += temp ) {
        printf("%d\n", min);
    }
    return 0;
}
