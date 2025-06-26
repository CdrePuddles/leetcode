class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        left: int = 0
        right: int = 1
        ret: List[int] = []
        for i in range(len(nums)):
            left = i-1
            right = i
            if nums[i] >= 0:
                break
        while left >= 0 or right < len(nums):
            if left >= 0 and (right >= len(nums) or abs(nums[left]) <= abs(nums[right])):
                ret.append(pow(nums[left], 2))
                left-=1
            elif right < len(nums):
                ret.append(pow(nums[right], 2))
                right+=1
        return ret