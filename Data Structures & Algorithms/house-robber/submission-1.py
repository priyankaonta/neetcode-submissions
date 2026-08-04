class Solution:
    def rob(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        DP = []
        DP.append(nums[0])
        DP.append(max(nums[0], nums[1]))
        for i in range (2, len(nums)):
            DP.append(max(DP[i-1], DP[i-2] + nums[i]))
        return max(DP)
        