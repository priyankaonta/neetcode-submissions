#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>myMap;
        for(int i = 0; i < nums.size(); i++) {
            if(myMap.contains(target - nums[i]) == 0){ // if hash does not contain complement number, 
                myMap[nums[i]] = i; // add the curr number to the hash
            }
            else{ // if the hash does contain the complement number 
                return  {myMap[target - nums[i]], i};
            }
        }

      
    }
};
