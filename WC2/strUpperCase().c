#include <stdio.h>

void strUpperCase(char str[]) {
    for ( char *p = str; *p != '\0'; p++ ) {
        if ( *p >= 97 && *p <= 122 ) {
            *p -= 32;
        }
    }
}

int main() {
    char str[] = "hellomydearfriend";
    
    
    strUpperCase(str);
    
    return 0;
}

