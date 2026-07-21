class Solution {
public:
// using stack;
    void reverseString(vector<char>& s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }
        int i=0;
        while(!st.empty()){
            s[i]=st.top();
            st.pop();
            i++;
        }
    }
};