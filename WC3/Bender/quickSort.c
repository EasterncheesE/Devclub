#include <stdio.h>

void swap(int *a, int *b) {
    int buffer = *a;
    
    *a = *b;
    *b = buffer;
}

int partition(int array[], int lo, int hi) {
    int tail = lo;
    int mid = (lo + hi) / 2;
    
    swap(&array[mid], &array[hi]);
    
    for ( ; array[tail] < array[hi]; tail++ );
    for ( int i = tail + 1; i < hi; i++ ) {
        if ( array[i] < array[hi] ) {
            swap(&array[tail], &array[i]);
            tail += 1;
        }
    }
    swap(&array[hi], &array[tail]);
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

void arrayFill(int len, FILE *in) {
    int array[len];
    int buffer;
    int lo = 0;
    int hi = len - 1;
    FILE *out;

    // printf("A fill working");
    out = fopen("task.out", "w");

    // for ( int i = 0; fscanf(in, "%d", &buffer) != EOF && i < len; i++ ) {
    //     array[i] = buffer;
    // }
    
    for (int i = 0; i < len; i++) {
        array[i] = len - i;
    }
    // printf("Sending to Qsort\n");
    quickSort(array, lo, hi);

    for ( int i = 0; i < len - 1; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[len-1]);
}

int main() {
    int len = 500000;
    FILE *in;

    // in = fopen("task.in", "r");
    // fscanf(in, "%d", &len);
    
    arrayFill(len, in);
    
    return 0;
}
