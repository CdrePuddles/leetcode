class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dictionary: dict[str, List[str]] = {}
        ret: List[List[str]] = []
        temp: str = ""
        for word in strs:
            temp = ''.join(sorted(word))
            dictionary[temp] = dictionary.get(temp, [])
            dictionary[temp].append(word)
        for key in dictionary:
            ret.append(dictionary[key])
        return ret