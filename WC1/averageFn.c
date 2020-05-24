#include <stdio.h>

int average(unsigned int a, unsigned int b) {
    return (a / 2 + b / 2 + (a % 2 + b % 2) / 2);
}

int main() {
    unsigned int a, b;
    unsigned int aver;
    
    scanf("%d %d", &a, &b);
    
    aver = average( a, b );
    
    printf("%d\n", aver);
    
    return 0;
}
