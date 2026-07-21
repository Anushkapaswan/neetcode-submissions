class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int l=s.length();
        int maxString=0;

        int i=0;
        for(int j=0;j<s.length();j++){
            while(!st.empty() && st.count(s[j])){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
                maxString=max(j-i+1,maxString);
        }
        return maxString;
    }
};
