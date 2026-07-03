#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>duplicate;
        for(int i = 0; i < nums.size(); i++){
            if(duplicate.count(nums[i]) >= 1){
                return true;
            }
            duplicate.insert(nums[i]);   
        }
        return false;

        
        
        
    }
};