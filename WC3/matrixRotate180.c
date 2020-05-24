#include <stdio.h>

#define SIZE 5

void matrixRotate180(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        int nextRow = size - 1 - row;
        
        for ( int col = 0; col < size; col++ ) {
            int nextCol = size - 1 - col;
            
            target[nextRow][nextCol] = source[row][col];
        }
    }
    for ( int i = 0; i < SIZE; i++ ) {
        for ( int j = 0; j < SIZE - 1; j++ ) {
            printf("%d ", target[i][j]);
        }
        printf("%d\n", target[i][SIZE-1]);
    }
}

int main() {
    int source[SIZE][SIZE];
    int target[SIZE][SIZE];
    int data = 0;
    int size = SIZE;
    
    printf("\nSOURCE MATRIX\n");
    for ( int i = 0; i < SIZE; i++ ) {
        for ( int j = 0; j < SIZE - 1; j++ ) {
            source[j][i] = data;
            data += 1;
        }
        source[SIZE-1][i] = data;
        data += 1;
    }
    for ( int i = 0; i < SIZE; i++ ) {
        for ( int j = 0; j < SIZE - 1; j++ ) {
            printf("%d ", source[i][j]);
        }
        printf("%d\n", source[i][SIZE-1]);
    }
    
    printf("\nFN\n");
    matrixRotate180(target, source, size);
    
    return 0;
}
