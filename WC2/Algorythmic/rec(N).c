#include <stdio.h>

int counter(int i) {
    if ( i < 100 ) {
        printf("I: %d\n", i);
    return counter(i+1);
    }
    return i;
}

int main() {
    int x;
    int i = 0;
    x = counter(i);
    printf("X: %d\n", x);
    return 0;
}