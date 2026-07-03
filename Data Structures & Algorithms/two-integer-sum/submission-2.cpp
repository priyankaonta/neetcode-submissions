class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>sums;
        unordered_map<int,int>myMap;
        int difference = 0;

        // iterate through the nums array 
        for(int i = 0; i < nums.size(); i++) {

             if(myMap.find(target - nums[i]) != myMap.end()) {
                // get the complimentary number 
                int num1 = target - nums[i];
                // get its index 
                int val1 = myMap[num1];
                cout << "val 1 is: " << endl;

                // add to vector
                sums.push_back(val1);
                sums.push_back(i);
            }
            // if the curr number is not in the hash, add it 
            // <curr number, index>
            if(myMap.find(nums[i]) == myMap.end()) {
                myMap[nums[i]] = i;
            }
            // if the complimentary number is in the hash, 
           
        }
        return sums;
        
    }
};
