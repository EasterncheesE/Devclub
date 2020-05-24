void arrayPrintReversed(int array[], int size) {
    for ( int counter = size - 1; counter > 0; counter-- ) {
        printf("%d ", array[counter]);
    }
    printf("%d\n", array[0]);
}
