class Solution {
public:
    stack<int>st;
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n=tokens.size();
        for(int i=0;i<n;i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
               st.push(stoi(tokens[i]));
            }
            else{
                if(tokens[i]=="+"){
                    int fst=st.top();
                    st.pop();
                    int scd=st.top();
                    st.pop();
                    int add=fst+scd;
                    st.push(add);
                }
                else if(tokens[i]=="-"){
                    int scd=st.top();
                    st.pop();
                    int fst=st.top();
                    st.pop();
                    int sub=fst-scd;
                    st.push(sub);
                }
                else if(tokens[i]=="*"){
                    int fst=st.top();
                    st.pop();
                    int scd=st.top();
                    st.pop();
                    int mul=fst*scd;
                    st.push(mul);
                }
                else{
                    int scd=st.top();
                    st.pop();
                    int fst=st.top();
                    st.pop();
                    int div=fst/scd;
                    st.push(div);
                }
            }
        }
        return st.top();
    }
};
