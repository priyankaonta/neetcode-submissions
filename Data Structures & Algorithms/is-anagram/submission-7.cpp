class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        if(s.length() != t.length()){
            return false;
        }
        else{
            for(int i = 0; i < s.length(); i++){
                mp1[s[i]]++;
                mp2[t[i]]++;
            }
        }
        return mp1 == mp2;
        
    }
};
