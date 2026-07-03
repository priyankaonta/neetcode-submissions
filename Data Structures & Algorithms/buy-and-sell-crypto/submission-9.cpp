class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int min_el = prices[0];
        int profit = 0;
        for (int i = 0; i < prices.size(); i++){
           if (prices[i] < min_el){
            min_el = prices[i];
           }
           if (prices[i] - min_el > profit){
            profit = prices[i] - min_el;
           }
        }
        return profit;

        // auto minIt = min_element(prices.begin(), prices.end());
        // int minIndex = minIt - prices.begin();

        // if (minIndex != prices.size() - 1){
        
        //     int max = *max_element(prices.begin() + minIndex, prices.end());
        //     return max - prices[minIndex];
        // }
        // else{
        //     return 0;
        //}
        
    }
};
