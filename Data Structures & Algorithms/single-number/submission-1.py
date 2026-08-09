class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        hashmap = {}
        for i in nums:
            hashmap[i] = hashmap.get(i, 0) + 1
        for key, value in hashmap.items():
            if value == 1:
                return key

        