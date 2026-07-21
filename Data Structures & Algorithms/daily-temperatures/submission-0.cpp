class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int>st;
        vector<int>res(temp.size());
        res[temp.size()-1]=0;
        st.push(temp.size()-1);
        for(int j=temp.size()-1;j>=0;j--){
            while(!st.empty() && temp[st.top()]<=temp[j] ){
                st.pop();
                }
                if(!st.empty()) res[j]=st.top()-j;
                st.push(j);
            }
        return res;
        }
};
