#include <stdio.h>

#define XORNUM 42

int main() {
    int size;
    int temp;
    
    scanf("%d", &size);
    
    for ( int i = 0; i < size; i++ ) {
        scanf("%d", &temp);
        printf("%d\n", temp^XORNUM);
    }
    return 0;
    
}
