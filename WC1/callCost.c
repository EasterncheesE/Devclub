#include <stdio.h>

#define ONE 101
#define TWO 102
#define THREE 103
#define FOUR 104
#define FIVE 112

int main() {
    int cityCallCost = 1;
    int shortCallCost = 40;
    int number, duration;
    int shortNumberBeg = 100;
    int shortNumberEnd = 999;
    int cityNumberBeg = 1000000;
    int cityNumberEnd = 9999999;
    
    scanf("%d %d", &number, &duration);
    
    if ( number == ONE || number == TWO || number == THREE || number == FOUR || number == FIVE || duration < 1 ) {
        printf("0$\n");
    } else if ( number >= shortNumberBeg && number <= shortNumberEnd ) {
        printf("%d$\n", duration*shortCallCost);
    } else if ( number >= cityNumberBeg && number <= cityNumberEnd ) {
        printf("%d$\n", duration*cityCallCost);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
