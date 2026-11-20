//matrix diagonal sum
//https://leetcode.com/problems/matrix-diagonal-sum/description/
nt diagonalSum(int** mat, int matSize, int* matColSize) {
    int sum = 0;
    int i;

    for (i = 0; i < matSize; i++) {
        sum += mat[i][i];

        sum += mat[i][matSize - 1 - i];
    }

    // Avoid counting middle element twice
    if (matSize % 2 == 1) {
        sum -= mat[matSize / 2][matSize / 2];
    }

    return sum;
}
