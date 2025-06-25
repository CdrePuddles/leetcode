class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        up: int = 0
        down: int = len(matrix) -1
        left: int = 0
        right: int = len(matrix[0]) -1
        ret: list[int] = []


        while up <= down and left <= right:
            for i in range(left, right+1):
                ret.append(matrix[up][i])
            up+=1

            for i in range(up, down+1):
                ret.append(matrix[i][right])
            right-=1

            if up <= down:
                for i in range(right, left-1, -1):
                    ret.append(matrix[down][i])
                down-=1

            if left <= right:
                for i in range(down, up-1, -1):
                    ret.append(matrix[i][left])
                left+=1
        return ret