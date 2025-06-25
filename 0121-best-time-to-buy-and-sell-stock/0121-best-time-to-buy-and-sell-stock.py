class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        lo: int = 100000000
        hi: int = -1
        ret: int = 0
        price: int = 0
        for i in range(len(prices)):
            price = prices[i]
            if price < lo:
                lo = price
                hi = -1
            elif price > hi:
                hi = price
            ret = max(ret, hi-lo)
        return ret
            
            