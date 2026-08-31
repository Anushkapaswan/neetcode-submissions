class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int>st;
        int n=op.size();
        for(int i=0;i<n;i++){
            if(op[i]!="+" && op[i]!="C" && op[i]!="D"){
                    st.push(stoi(op[i]));
            }
            else{
                if(op[i]=="+"){
                    int snd=st.top();
                    st.pop();
                    int fst=st.top();
                    st.push(snd);
                    int sum=fst+snd;
                    st.push(sum);
                }
                else if (op[i]=="C"){
                    st.pop();
                }
                else{
                    int d=st.top();
                    st.push(d*2);
                }
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;

    }
};