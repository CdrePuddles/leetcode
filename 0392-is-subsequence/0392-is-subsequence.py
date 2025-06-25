class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        ssz: int = len(s)
        tsz: int = len(t)

        if ssz > tsz:
            return False
        cur: int = 0

        for i in range(tsz):
            if cur == ssz:
                return True
            if t[i] == s[cur]:
                cur+=1
        return cur == ssz