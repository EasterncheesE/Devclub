#include <stdio.h>

int crypt(int input, int keyA, int keyB) {
    input = (input - keyB) / keyA;
    return input;
}

int main() {
    int plain1, plain2, encrypted1, encrypted2, length, number;
    int keyA, keyB;
    
    scanf("%d %d %d %d %d", &plain1, &encrypted1, &plain2, &encrypted2, &length);
    
    keyA = (encrypted1 - encrypted2) / (plain1 - plain2);
    keyB = encrypted2 - plain2 * keyA;
    
    for ( int i = 0; i < length; i++ ) {
        scanf("%d", &number);
        if ( i < length - 1 ) {
            printf("%d ", crypt(number, keyA, keyB));
        } else {
            printf("%d\n", crypt(number, keyA, keyB));
        }
        printf("\n%d\n",sqrt(4));
    }
    return 0;
}
