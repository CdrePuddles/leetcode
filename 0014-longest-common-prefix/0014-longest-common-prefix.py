class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:

        ret: str = ""
        temp: str = ""
        for i in range(len(strs[0])):
            temp = strs[0][:i+1]
            for word in strs:
                if word[:i+1] != temp:

                    return ret

            ret = temp

        return ret