class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        bag: dict[int, int] = {}
        for num in nums:
            if bag.get(num,0):
                return True
            else:
                bag[num] = 1
        return False