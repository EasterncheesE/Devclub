#include <stdio.h>

int main() {
    int array[16] = {0,1,0,3,0,1,0,3,3,3,3,0,1,1,0,1};
    int count[4] = {0,0,0,0};

    for ( int i = 0; i < 16; i++ ) {
        int index = array[i];
        printf("i = %d, array[i] = %d, index = %d\n", i, array[i], index);
        count[index] += 1;
        printf("count[%d] = %d\n\n", index, count[index]);
    }

    for ( int i = 0; i < 4; i++ ) {
        printf("%d: %d\n", i, count[i]);
    }
    
    return 0;
}
