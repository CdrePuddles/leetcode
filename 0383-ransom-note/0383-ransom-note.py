class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        letters: List[int] = [0]*26
        val: int = 0
        for letter in magazine:
            val = ord(letter)-97
            letters[val]+=1
        for letter in ransomNote:
            val = ord(letter)-97
            if letters[val] > 0:
                letters[val]-=1
                if letters[val] < 0:
                    return False
            else:
                return False
        return True