#include <stdio.h>

void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int buffer[size];
    int i = lo;
    int j = mid;
    int k = 0;
    
    for ( ; i < mid && j < hi; k++ ) {
        if ( array[i] < array[j] ) {
            buffer[k] = array[i];
            i += 1;
        } else {
            buffer[k] = array[j];
            j += 1;
        }
    }
    for ( ; i < mid; i++, k++ ) {
        buffer[k] = array[i];
    }
    for ( ; j < hi; j++, k++ ) {
        buffer[k] = array[j];
    }
    for ( i = 0, j = lo; i < size; i++, j++ ) {
        array[j] = buffer[i];
    }
}

void mergeSort(int array[], int lo, int hi) {
    int mid = (lo + hi) / 2;
    
    if ( lo < mid ) {
        mergeSort(array, lo, mid);
        mergeSort(array, mid, hi);
        merge(array, lo, mid, hi);
    }
}

void arrayFill(int len, FILE *in) {
    int array[len];
    int buffer;
    int lo = 0;
    int hi = len - 1;
    FILE *out;
    
    out = fopen("task.out", "w");
    
    for ( int i = 0; fscanf(in, "%d", &buffer) != EOF && i < len; i++ ) {
        array[i] = buffer;
        printf("%d_", array[i]);
    }
    
    printf("\n");
    mergeSort(array, lo, len);
    for ( int i = 0; i < hi; i++ ) {
        fprintf(out, "%d ", array[i]);
        printf("%d ", array[i]);
    }
    fprintf(out, "%d\n", array[hi]);
    printf("%d\n", array[hi]);
}

int main() {
    int len;
    FILE *in;
    
    in = fopen("task.in", "r");
    fscanf(in, "%d", &len);
    
    arrayFill(len, in);
    
    return 0;
}
