#include <stdio.h>

int strLen(char str[]) {
    int length = 0;
    
    for ( ; str[length] != '\0'; length++ );
    return length;
}

int main() {
    char str[] = {"0123456789"};
    
    printf("%d\n", strLen(str));
    
    return 0;
}