class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key=lambda x: x[0])
        lo: int = intervals[0][0]
        hi: int = intervals[0][1]
        ret: List[List[int]] = []
        for i in range(1, len(intervals)):
            if intervals[i][0] <= hi:
                hi = max(hi, intervals[i][1])
            else: 
                ret.append([lo, hi])
                lo = intervals[i][0]
                hi = intervals[i][1]

        ret.append([lo, hi])
        return ret

