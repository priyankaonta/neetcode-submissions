class Solution:
    def rob2(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        DP = []
        DP.append(nums[0])
        DP.append(max(nums[0], nums[1]))
        for i in range (2, len(nums)):
            DP.append(max(DP[i-1], DP[i-2] + nums[i]))
        return max(DP)

    def rob(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]

        DP_first, DP_last = [], []
        for index, value in enumerate(nums):
            if index == 0:
                DP_first.append(value)
            elif index == (len(nums)-1):
                DP_last.append(value)
            else:
                DP_first.append(value)
                DP_last.append(value)
        first = self.rob2(DP_first)
        second = self.rob2(DP_last)
        return max(first,second)


    
        

             