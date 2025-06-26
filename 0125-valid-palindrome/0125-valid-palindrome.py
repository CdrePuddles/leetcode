class Solution:
    def isPalindrome(self, s: str) -> bool:
        temp = s.lower()
        temp = temp.strip()
        temp.strip()
        temp = re.sub(r'[^A-Za-z0-9]', '', temp)
        sz:int = len(temp)
        print(temp)
        for i in range(len(temp)//2):
            if temp[i] != temp[sz-i-1]:
                return False
        return True