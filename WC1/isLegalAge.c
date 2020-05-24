//Code works
// Если вбить отрицательное число, показывает yes.

#include <stdio.h>

int main() {
    unsigned int age;
    
    scanf("%u", &age);
    
    if ( age >= 21 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
    
    return 0;
}
