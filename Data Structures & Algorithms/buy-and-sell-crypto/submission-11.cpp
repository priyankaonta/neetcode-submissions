class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_elem = prices[0]; 
        int profit = 0;
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < min_elem) {
                min_elem = prices[i];
            }
            if(prices[i] - min_elem > profit) {
                profit = prices[i] - min_elem ;
            }
        }
        return profit;
        
    }
};
