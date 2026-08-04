class Solution:
    def climbStairs(self, n: int) -> int:
        DP = []
        DP.insert(0,1)
        DP.insert(1,1)
        for i in range(2,n+1):
            DP.append(DP[i-1] + DP[i-2])

        return DP[n]
        
        