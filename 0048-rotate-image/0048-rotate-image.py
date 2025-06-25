class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        temp: int
        width: int = len(matrix[0])
        height: int = len(matrix)

        for i in range(height):
            for j in range(i, width):
                temp = matrix[i][j]
                matrix[i][j] = matrix[j][i]
                matrix[j][i] = temp
        for i in range(height):
            for j in range(width//2):
                temp = matrix[i][j]
                matrix[i][j] = matrix[i][width-j-1]
                matrix[i][width-j-1] = temp
