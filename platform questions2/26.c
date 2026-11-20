//set matrix zeroes
//https://leetcode.com/problems/set-matrix-zeroes/description/
void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int rows = matrixSize;
    int cols = matrixColSize[0];

    int row[rows];
    int col[cols];

    // Initialize arrays
    for (int i = 0; i < rows; i++) {
        row[i] = 0;
    }

    for (int j = 0; j < cols; j++) {
        col[j] = 0;
    }

    // Find all zeroes
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Set corresponding rows and columns to zero
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (row[i] == 1 || col[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }
}
