class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        if not len(nums):
            return []
        ret: List[str] = []
        prev: int = nums[0]-1
        lo: int = nums[0]
        hi: int = nums[0]
        for num in nums:
            if num-prev == 1:
                hi = num
            else:
                if lo != hi:
                    ret.append(str(lo)+"->"+str(hi))
                else:
                    ret.append(str(lo))
                lo = num
                hi = lo
            prev = num
            
        if lo != hi:
            ret.append(str(lo)+"->"+str(hi))
        else:
            ret.append(str(lo))
        
        return ret