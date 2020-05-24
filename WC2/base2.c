#include <stdio.h>

#define UPPERCASE_A 65
#define MAX_DEC_NUM 9

int main() {
    int decimal, base;
    int counter = 1;
    
    scanf("%d %d", &decimal, &base);
    if ( decimal < 0 ) {
        printf("-");
        decimal = -decimal;
    }
    for ( int limit = decimal / base; counter <= limit; ) {
        if ( decimal / counter > 1 ) {
            counter *= base;
        }
    }
    for ( int mod; counter > 0; counter /= base ) {
        if ( decimal / counter > MAX_DEC_NUM ) {
            mod = decimal / counter - MAX_DEC_NUM - 1;
            printf("%c", mod+UPPERCASE_A);
        } else {
            printf("%d", decimal/counter);
        }
        decimal %= counter;
    }
    printf("\n");
    return 0;
}
