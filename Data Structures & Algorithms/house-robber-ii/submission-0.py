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
            print("index is: and i is:", index, value)
            if index == 0:
                print("index is 0:")
                DP_first.append(value)
            elif index == (len(nums)-1):
                print("index is 2:")
                DP_last.append(value)
            else:
                print("other")
                DP_first.append(value)
                DP_last.append(value)
        for i in DP_first:
            print("DP_first values:", i)
        first = self.rob2(DP_first)
        second = self.rob2(DP_last)
        return max(first,second)


    
        

             