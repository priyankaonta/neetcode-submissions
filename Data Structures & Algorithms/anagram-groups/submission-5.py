class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # create a hashmap <sorted_word, word>
        # iterate through the list 
        # while doing so, sort each word 
        # if its in the hashmap, add the word as another value 
        # if its not in the hashmap, add the sorted word to the map 
        # and the word as a value 
        # return a list of the values for each key 

        map = {}
        for word in strs:
            sortedW = ''.join(sorted(word))
            if sortedW in map:
                map[sortedW].append(word)
            else:
                map[sortedW] = [word]
        return list(map.values())
        