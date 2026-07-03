class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int max1 = 0;
        int max2 = 0;
        while(stones.size() != 1){
            max1 = *max_element(stones.begin(), stones.end());
            stones.erase(max_element(stones.begin(), stones.end()));
            cout << "max1 is: " << max1 << endl;

            max2 = *max_element(stones.begin(), stones.end());
            stones.erase(max_element(stones.begin(), stones.end()));
            cout << "max2 is: " << max2 << endl;
    
            if(max1 < max2){
                cout << max1 << " is smaller than " << max2 << endl;
                max2 = max2 - max1;
                cout << "max2 is now: " << max2 << endl;
                stones.push_back(max2);
                cout << "stones end is now: " << stones.back() << endl;
            }
            else{
                cout << max2 << " is smaller than " << max1 << endl;
                max1 = max1 - max2;
                cout << "max1 is now: " << max1 << endl;
                stones.push_back(max1);
                cout << "stones end is now: " << stones.back() << endl;
            }  
        }
        return stones[0];
        
    }
};
