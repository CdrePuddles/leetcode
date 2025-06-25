class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        bag: dict[str, int] = {}
        ret: int = 0
        for jewel in jewels:
            bag[jewel] = bag.get(jewel,0)+1
        for stone in stones:
            ret += bag.get(stone,0)
        return ret