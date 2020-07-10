#include <stdio.h>

void arrayMerge(int target[], int src1[], int len1, int src2[], int len2) {
    int countT = 0;
    int count1 = 0;
    int count2 = 0;
    
    for ( ; count1 < len1 && count2 < len2; ) {
        if ( src1[count1] <= src2[count2] ) {
            target[countT] = src1[count1];
            printf("1<2 CT = %d, 1[%d] = %d, 2[%d] = %d, T[%d] = %d\n", countT, count1, src1[count1], count2, src2[count2], countT, target[countT]);
            count1 += 1;
        } else {
            target[countT] = src2[count2];
            printf("1>2 CT = %d, 1[%d] = %d, 2[%d] = %d, T[%d] = %d\n", countT, count1, src1[count1], count2, src2[count2], countT, target[countT]);
            count2 += 1;
        }
        countT += 1;
    }
    if ( count1 < len1 ) {
        for ( ; count1 < len1; ) {
            target[countT] = src1[count1];
            printf("OOL0 CT = %d, 1[%d] = %d, 2[%d], T[%d] = %d\n", countT, count1, src1[count1], count2, countT, target[countT]);
            countT += 1;
            count1 += 1;
        }
    } else if ( count2 < len2 ) {
        for ( ; count2 < len2; ) {
            target[countT] = src2[count2];
            printf("OOL1 CT = %d, 1[%d], 2[%d] = %d, T[%d] = %d\n", countT, count1, count2, src2[count2], countT, target[countT]);
            countT += 1;
            count2 += 1;
        }
    }
}

int main() {
    int len1 = 50;
    int len2 = 50;
    int src1[len1];
    int src2[len2];
    int size = len1 + len2;
    int target[size];
    
    src1[0] = 1;
    src2[0] = 0;
    
    for ( int i = 1; i < len1; i++ ) {
        src1[i] = src1[i-1] + 2;
    }
    for ( int i = 1; i < len2; i++) {
        src2[i] = src2[i-1] + 2;
    }
    for ( int i = 0; i < len1; i++ ) {
        printf("1[%d] = %d\n", i, src1[i]);
    }
    for ( int i = 0; i < len2; i++ ) {
        printf("2[%d] = %d\n", i, src2[i]);
    }
    printf("\n FN STARTS\n");
    arrayMerge(target, src1, len1, src2, len2);
    
    printf("\n");
    for ( int i = 0; i < size; i++ ) {
        printf("ARR[%d] = %d\n", i, target[i]);
    }
    return 0;
}
