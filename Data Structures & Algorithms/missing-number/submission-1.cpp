class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() + 1;
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]] = i;
        }
        for(int i = 0; i < n; i++){
            if(mp.count(i) == 0){
                return i;
            }
        }
        return 0;
        
    }
};
