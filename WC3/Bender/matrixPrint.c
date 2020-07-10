void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
    int limit = size - 1;
    
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < limit; col++ ) {
            fprintf(out, "%d ", matrix[col][row]);
        }
        fprintf(out, "%d\n", matrix[size-1][row]);
    }
}
