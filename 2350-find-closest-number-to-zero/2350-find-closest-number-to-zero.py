class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        ret: int = -100000000
        for num in nums:
            if abs(num) < abs(ret):
                ret = num
            elif abs(ret) == abs(num):
                ret = max(ret, num)
        return ret