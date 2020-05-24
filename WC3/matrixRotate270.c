void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        int targetRow = size - row - 1;
        
        for ( int col = 0; col < size; col++ ) {
            target[col][targetRow] = source[row][col];
        }
    }
}
