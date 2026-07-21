class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>res(temperatures.size());
        stack<int>st;
        int n=temperatures.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int ind=st.top();
                res[ind]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        return res;
    }
};
