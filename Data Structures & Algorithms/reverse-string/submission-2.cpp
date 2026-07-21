class Solution {
public:
    void reverseString(vector<char>& s) {
        // using stack we can do it
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
        return;
    }
};