class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0 
        left = 0
        right = 1
     
        while right < len(prices):
            if prices[left] > prices[right]:
                print("first if")
                left = right 
                right += 1
            elif prices[left] <= prices[right]:
                dummy = prices[right] - prices[left]
                if dummy > profit:
                    profit = dummy
                right += 1
        return profit
        