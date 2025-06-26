from collections import OrderedDict
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        book = set(nums)
        ret: int = 0
        count: int = 0

        for val in book:
            if val - 1 not in book:
                count = 0
                while val+count in book:
                    count += 1

            ret = max(ret, count)
        return ret