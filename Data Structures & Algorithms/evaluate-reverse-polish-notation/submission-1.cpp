class Solution {
public:
int evaluate(int   val1 , string op, int  val2 ){
    if(op=="+") return val1+val2;
    if(op=="-") return val1-val2;
    if(op=="*") return val1*val2;
    if(op=="/") return val1/val2;
}
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n=tokens.size();
        for(int i=0;i<n;i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/") st.push(stoi(tokens[i]));
            else {
                 if(!st.empty()){
                    int val2=st.top();
                    st.pop();
                    int val1=st.top();
                    st.pop();
                    int res=evaluate(val1,tokens[i],val2);
                    st.push(res);
                 }
            }
        }
        return st.top();
    }
};
