#include <stdio.h>

#define SIZE 5

void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            fscanf(in, "%d", &matrix[col][row]);
        }
    }
}

int main() {
    int matrix[SIZE][SIZE];
    FILE *in;
    int size = 20;
    int lastrow = SIZE - 1;
    in = fopen("task.in", "r");
    
    matrixScan(in, matrix, size);
    printf("\nFN FINISHED\n\n");
    
    for ( int col = 0; col < SIZE && size > 0; col++ ) {
        for ( int row = 0; row < SIZE - 1 && size > 0; row++, size-- ) {
            printf("%d ", matrix[col][row]);
        }
        printf("%d\n", matrix[col][SIZE-1]);
    }
    return 0;
}