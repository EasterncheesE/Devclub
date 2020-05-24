#include <stdio.h>

int strEqual(char str1[], char str2[]) {
    for ( int i = 0; str1[i] == str2[i]; i++ ) {
        if ( str1[i] == '\0' ) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int result;
    char str1[] = {1, 2, 3 ,4 ,'\0'};
    char str2[] = {1, 2, 3 ,4 ,'\0'};
    
    result = strEqual(str1, str2);
    printf("RESULT IS: %d\n", result);
    return 0;
}
