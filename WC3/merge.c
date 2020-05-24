#include <stdio.h>

#define SIZE 50
void merge(int array[], int lo, int mid, int hi) {
    int count1 = lo;
    int count2 = mid;
    int countT = 0;
    int size = hi - lo;
    int buffer[size];
    
    for ( ; count1 < mid && count2 < hi; ) {
        if ( array[count1] < array[count2] ) {
            buffer[countT] = array[count1];
            count1 += 1;
        } else {
            buffer[countT] = array[count2];
            count2 += 1;
        }
        countT += 1;
    }
    for ( ; count1 < mid; ) {
        buffer[countT] = array[count1];
        countT += 1;
        count1 += 1;
    }
    for ( ; count2 < hi; ) {
        buffer[countT] = array[count2];
        countT += 1;
        count2 += 1;
    }
    for ( int i = 0, j = lo; i < size; i++, j++ ) {
        array[j] = buffer[i];
    }
}

int main() {
    int size = 50;
    int array[size];
    int lo = 0;
    int mid = 5;
    int hi = 9;
    for ( int i = 0; i < SIZE; i++ ) {
        array[i] = i + 1;
        printf("%d ", array[i]);
    }
    printf("\n");
    merge(array, lo, mid, hi);
    
    return 0;
}
