//count negative number in a sorted matrix
//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/description/
int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int count = 0;

    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridColSize[i]; j++) {

            if (grid[i][j] < 0) {
                count++;
            }

        }
    }

    return count;
}
