class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> numProducts;
        int product = 1;
        // keeps track of current "self"
        for(int i = 0; i < nums.size(); i++) {
            cout << "i is: " << i << endl;
            int self = i;
            //keeps track of the actual elements 
            for(int j = 0; j < nums.size(); j++) {
                cout << "j is: " << j << endl;
                if(j != self) {
                    cout << j << " does not equal " << self << endl;
                    product = product * nums[j];
        
                }
                if(j == nums.size()-1) {
                    numProducts.push_back(product);
                    product = 1;
                }

            }

        }
        return numProducts;

    }
};
