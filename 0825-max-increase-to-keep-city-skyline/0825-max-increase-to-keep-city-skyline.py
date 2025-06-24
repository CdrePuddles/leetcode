class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        n: int = len(grid)
        ret: int = 0
        row: List[int] = [0] * n
        col: List[int] = [0] * n

        for r in range(n):
            for c in range(n):
                row[r] = max(row[r], grid[r][c])
                col[c] = max(col[c], grid[r][c])

        for r in range(n):
            for c in range(n):
                ret += min(row[r], col[c]) - grid[r][c]
        
        return ret