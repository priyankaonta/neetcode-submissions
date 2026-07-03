class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int ansLength = 2*n;
        vector<int>ans(ansLength,0);
        for(int i = 0; i < nums.size(); i++) {
            cout << "nums at: " << i << " is: " << nums[i] << endl;
            ans[i] = nums[i];
            ans[i+n] = nums[i];
        }
        return ans;
      
    
    }

   
};