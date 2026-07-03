class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>mySet;
        for(int i = 0; i < nums.size(); i++) {
            if ( mySet.find(nums[i]) != mySet.end() ) {
                cout << "nums at " << i << " does not equal to the end " << endl;
                return true;
            }
            else {
                if ( mySet.find(nums[i]) == mySet.end() ) {
                    // if ( i != mySet.size()-1 ) {
                    //     cout << "nums at " << i << " equals the end and i is the last element"
                    //     return true;
                    // }
                    // else {
                        mySet.insert(nums[i]);
                    // }
                }
            }
        }
        return false;
        
    }
};