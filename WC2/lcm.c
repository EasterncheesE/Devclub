#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}

int main() {
    int a, b, result;
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    fscanf(in, "%d %d", &a, &b);
    if ( a == 0 || b == 0 ) {
        fprintf(out, "0\n");
        return 0;
    }
    result = a * (b / gcd(a, b));
    
    fprintf(out, "%d\n", result);
    return 0;
}
