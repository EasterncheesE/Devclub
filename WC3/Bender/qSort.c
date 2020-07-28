#include <stdio.h>

void swap(int *a, int *b) {
    int buffer = *a;
    
    *a = *b;
    *b = buffer;
}

int partition(int array[], int lo, int hi) {
    int mid = (hi - lo) / 2;
    int tail = lo;
    
    for (int i = 0; i <= hi; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    printf("\nPartition working\n");
    printf("BF SWAP_Amid[%d] = %d, Ahi[%d] = %d\n", mid, array[mid], hi, array[hi]);
    swap(&array[mid], &array[hi]);
    printf("AF SWAP_Amid[%d] = %d, Ahi[%d] = %d\n", mid, array[mid], hi, array[hi]);
    
    for (int i = 0; i <= hi; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    for (; array[tail] < array[hi]; tail++) {
        printf("Tail[%d] = %d\n", tail, array[tail]);
    }
    printf("\n");
    
    for ( int i = tail + 1; i < hi; i++ ) {
        if ( array[i] < array[hi] ) {
            printf("Ai[%d] %d < Ahi[%d] %d\n", i, array[i], hi, array[hi]);
            printf("INC_BF SWAP_Atail[%d] = %d, Ai[%d] = %d\n", tail, array[tail], i, array[i]);
            swap(&array[tail], &array[i]);
            printf("INC_AF SWAP_Atail[%d] = %d, Ai[%d] = %d\n", tail, array[tail], i, array[i]);
            
            for (int i = 0; i <= hi; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
            
            tail += 1;
            printf("Tail[%d] now = %d\n\n", tail, array[tail]);
        }
        printf("Ai[%d] %d > Ahi[%d] %d\n\n", i, array[i], hi, array[hi]);
    }
    for (int i = 0; i <= hi; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    printf("CEND BF SWAP_Ahi[%d] = %d, Atail[%d] = %d\n", hi, array[hi], tail, array[tail]);
    swap(&array[hi], &array[tail]);
    printf("CEND AF SWAP_Ahi[%d] = %d, Atail[%d] = %d\n", hi, array[hi], tail, array[tail]);
    
    for (int i = 0; i <= hi; i++) {
        printf("%d ", array[i]);
    }
    printf("Cycle ends, returning tail = %d\n", tail);
    
    return tail;
    
}

void quickSort(int array[], int lo, int hi) {
    int pivot;

    if ( lo < hi ) {
        pivot = partition(array, lo, hi);
        quickSort(array, lo, pivot-1);
        quickSort(array, pivot+1, hi);
    }
}

int main() {
    int size = 10;
    int array[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int lo = 0;
    int hi = size - 1;
    
    printf("HEREWESTARTTHECODEHEREWESTARTTHECODEHEREWESTARTTHECODEHEREWESTARTTHECODEHEREWESTARTTHECODEHEREWESTARTTHECODE\n\n");
    quickSort(array, lo, hi);
    
    return 0;
}