class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        for(int i = digits.size() - 1; i >= 0; i--){
            if(digits[i] != 9){
                cout << "digit is: " << digits[i] << endl;
                digits[i] = digits[i] + 1; 
                cout << "digit is now" << digits[i];
                return digits; 
            }
            else{
                digits[i] = 0;
            }
        }
        digits.insert(digits.begin(), 1);

        return digits;
        
    }
  
};
