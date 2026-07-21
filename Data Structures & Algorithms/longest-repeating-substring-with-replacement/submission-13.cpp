class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
        int i=0;
        int len=0;
        int mxFreq=0;
        for(int j=0;j<s.length();j++){
            mp[s[j]]++;
            mxFreq=max(mxFreq,mp[s[j]]);
            while((j-i+1)-mxFreq>k){
                mp[s[i]]--;
                i++;
            }
            len=max(len,j-i+1);
        }
        return len;
    }
};
