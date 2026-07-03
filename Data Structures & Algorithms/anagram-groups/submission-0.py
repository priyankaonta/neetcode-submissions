class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        myMap = defaultdict(list)
        for s in strs:
            myString = ''.join(sorted(s))
            myMap[myString].append(s)
        
        return list(myMap.values())
    