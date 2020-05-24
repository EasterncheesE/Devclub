#include <stdio.h>

#define THREE 3

int main() {
    int N, K;
    
    scanf("%d %d", &N, &K);
    
    int rem = (N+K) % K;
    printf("%d\n\n", rem);

    if ( rem == 0) {
        printf("%d\n", rem);
    } else {
    printf("%d\n", );
    }
    
    return 0;
}