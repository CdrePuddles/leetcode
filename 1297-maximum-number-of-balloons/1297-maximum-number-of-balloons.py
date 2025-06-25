class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        words: dict[str, int] = {}
        for letter in text:
            words[letter] = words.get(letter, 0) + 1
        if not (words.get('b', 0) and words.get('a', 0) and words.get('l', 0) and words.get('o', 0) and words.get('n', 0)):
            return 0
        else:
            return min(words['b'], words['a'], words['l']//2, words['o']//2, words['n'])
