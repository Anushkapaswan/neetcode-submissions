class Solution {
public:
    bool isAnagram(string s, string t) {
        // brute force 
        if(s.length()!=t.length()) return false;
        vector<int>nums(26,0);
        for(int i=0;i<s.length();i++){
            nums[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            nums[t[i]-'a']--;
        }
        for(int i=0;i<s.length();i++){
            if(nums[s[i]-'a']!=0) return false;
        }
        return true;
    }
};
