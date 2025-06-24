class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if (len(s) != len(goal)):
            return False
        size: int = len(goal)
        for i in range(size):
            if ((s[i:size] + s[0:i]) == goal):
                return True
        return False