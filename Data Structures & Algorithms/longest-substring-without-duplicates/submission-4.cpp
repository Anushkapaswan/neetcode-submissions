class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int l=s.length();
        int maxSubStr=0;

        int i=0;
        for(int j=0;j<s.length();j++){
            while(!st.empty() && st.count(s[j])){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
                maxSubStr=max(j-i+1,maxSubStr);
        }
        return maxSubStr;
    }
};
