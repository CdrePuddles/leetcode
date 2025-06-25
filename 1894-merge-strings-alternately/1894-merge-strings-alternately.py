class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        ret: str = ""
        first: int = len(word1)
        second: int = len(word2)
        sz: int = max(first, second)

        for i in range(sz):
            if i < first:
                ret += word1[i]
            if i < second:
                ret += word2[i]

        return ret