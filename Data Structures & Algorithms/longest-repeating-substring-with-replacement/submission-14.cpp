class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int i=0;
        int mxFrq=0;
        int len=0;
        for(int j=0;j<s.length();j++){
            mp[s[j]]++;
            mxFrq=max(mxFrq,mp[s[j]]);
            if((j-i+1)-mxFrq>k){
                mp[s[i]]--;
                i++;
            }
            len=max(len,j-i+1);
        }
        return len;
    }
};
