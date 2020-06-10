#include <stdio.h>

void arrayFill(int len, FILE* in) {
    int array[len];
    int buffer;
    int lo = 0;
    int hi = len - 1;
    int mid = (lo + hi) / 2;
    int counter = 0;

    for ( ; fscanf(in, "%d", &buffer) != EOF; ) {
        array[i] = buffer;
    }
    
    mergeSort(len, lo, hi);
}

void mergeSort(int len, int lo, int hi) {
    int array[len];
    int mid = (lo + hi) / 2;

    if ( lo < mid ) {
        mergeSort(array, lo, mid);
        mergeSort(array, mid, hi);
        merge(array, lo, mid, hi);
    }
}

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

int main() {
    int len;
    FILE* in;
    
    in = fopen("task.in", "r");
    fscanf(in,"%d", &len);

    arrayFill(len, in);
    mergeSort(len, 0, 10);

    return 0;
}
