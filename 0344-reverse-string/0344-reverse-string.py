class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        sz: int = len(s)-1
        temp: str = ""
        for i in range(len(s)//2):
            temp = s[i]
            s[i] = s[sz-i]
            s[sz-i] = temp