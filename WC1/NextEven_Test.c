//Code works
//В варианте x = x + 1 бендер не требует перевода строки перед printf

#include <stdio.h>

int main() {
    int x;
    
    scanf("%d", &x);
    
    if ( x % 2 != 0 ) {
        x += 1;
    }
    printf("%d\n", x);
    
    return 0;
}
