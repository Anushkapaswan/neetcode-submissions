class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                st.push(stoi(tokens[i]));
            }else {
                
                if(tokens[i]=="+"){
                int snc=st.top();
                st.pop();
                int fst=st.top();
                st.pop();
                    int add=snc+fst;
                    st.push(add);
                }
                else if(tokens[i]=="-"){
                int snc=st.top();
                st.pop();
                int fst=st.top();
                st.pop();

                    int sub=fst-snc;
                    st.push(sub);
                }
                else if(tokens[i]=="*"){
                int snc=st.top();
                st.pop();
                int fst=st.top();
                st.pop();

                    int mul=snc*fst;
                    st.push(mul);
                }
                else {
                int snc=st.top();
                st.pop();
                int fst=st.top();
                st.pop();
                    int div=fst/snc;
                    st.push(div);
                }
            }
        }
        return st.top();
    }
};
