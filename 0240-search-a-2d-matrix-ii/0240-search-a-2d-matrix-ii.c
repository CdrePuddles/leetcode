

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixColSize[i]; j++) {
            if (matrix[i][j] == target) {
                return 1;
            } else if (target < matrix[i][j]) {
                break;
            }
        }
    }
    return 0;
}