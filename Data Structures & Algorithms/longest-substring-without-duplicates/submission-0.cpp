class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=s.size();
        int maxRes=0;
        for(int i=0;i<len;i++){
        unordered_set<char>st;
            for(int j=i;j<len;j++){
                if(st.find(s[j])!=st.end()) break;
                st.insert(s[j]);
            }
            maxRes=max(maxRes,int(st.size()));
        }
        return maxRes;
    }
};
