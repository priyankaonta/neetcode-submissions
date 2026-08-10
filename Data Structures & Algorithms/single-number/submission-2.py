class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        # lets look at the right most bit of each number
        # bc n ^ 0 = n, we can ignore all 0's
        # there will be an even number of 1's (looking at all but the singleNumber)
        # duplicates will always cancel out SO 
        # all the other duplicate numbers will 0 out, leaving the singleNumber bit last
        res = 0 
        for n in nums:
            res = res ^ n
        return res




        