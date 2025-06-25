class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        sz: int = len(nums)
        ret: List[int] = [1] * sz

        left: int = 1
        for i in range(sz):
            ret[i] *= left
            left *= nums[i]

        right: int = 1
        for i in range(sz-1, -1, -1):
            ret[i] *= right
            right *= nums[i]
        
        return ret
