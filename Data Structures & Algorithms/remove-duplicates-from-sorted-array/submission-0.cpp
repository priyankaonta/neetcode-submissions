class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 1;
        
        for(int right = 1; right < nums.size(); right++) {
            if(nums[right] != nums[right - 1]) {
              //  int temp = nums[right - 1 ];
                nums[left] = nums[right];
              //  nums[right] = temp;
                left++;
            }
            
        }
        return left;
    

    }

    void print(vector<int>nums) {
        for(int i = 0; i < nums.size(); i++) {
            cout << nums[i] << endl;
        }
    }
    
    
        
};