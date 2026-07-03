class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0;

        # METHOD 1: 
        # create a hash map
        # iterate through nums and add each element to the map 
        # somehow get the smallest element (and set as curr) and from there check if 
        # curr + 1 exists in the hashmap
        # if it does, +1 to count
        # if it does not, reset count to 1 
        count = 1;
        bool = False;
        res = defaultdict(int)
        myArray = []
        for n in nums:
            res[n] += res[n] + 1

        for elements in res:
            if elements - 1 in res:
                continue
            if elements - 1 not in res:
                curr = elements 
                bool = True
                while bool == True:
                    if curr + 1 in res:
                        count = count + 1
                        curr = curr + 1 
                    else: 
                        bool = False
                        myArray.append(count)
                        count = 1
        return max(myArray)

                









       
        



        