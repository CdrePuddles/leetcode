class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numbers:dict[int, int] = {}
        val: int = 0

        for i in range(len(nums)):
            numbers[nums[i]] = i

        for i in range(len(nums)):
            val = target - nums[i]
            if numbers.get(val, 0) != 0:
                if numbers[val] != i:
                    return [numbers[val], i]
        return [0,0]