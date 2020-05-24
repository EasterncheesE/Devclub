int arrayScan(FILE *in, int array[], int limit) {
    int total = 0;
    
    for ( ; total < limit && fscanf(in, "%d", &array[total]) > 0; total++ );
    return total;
}
