class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        lo: int = 100000000
        hi: int = -1
        ret: int = 0
        for i in range(len(prices)):
            if prices[i] < lo:
                lo = prices[i]
                hi = -1
            elif prices[i] > hi:
                hi = prices[i]
            ret = max(ret, hi-lo)
        return ret
            
            