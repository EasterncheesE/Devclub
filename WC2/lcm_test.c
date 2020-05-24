#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a%b);
}

int main() {
    int a, b, hcd, result;
    FILE *in;
    FILE *out;
    
    in = fopen("task.in", "r");
    out = fopen("task.out", "w");
    scanf("%d %d", &a, &b);
    // fscanf(in, "%d %d", &a, &b);
    if ( a == 0 || b == 0 ) {
        printf("A or B = 0, 0\n");
        fprintf(out, "0\n");
        return 0;
    }
    hcd = gcd(a, b);
    result = a * (b / hcd);
    printf("%d\n", result);
    fprintf(out, "%d\n", result);
    return 0;
}

