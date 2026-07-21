class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int i=0;
        int j=0;
        int n=s.length();
        int size=0;
        while(j<n){
            while(st.count(s[j])){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);
            size=max(size,j-i+1);
            j++;
        }
        return size;
    }
};
