class Solution {
public:
    string decodeString(string s) {
        stack<string>st;
        int n=s.size();
        for(auto c:s){
            if(c!=']'){
                st.push(string(1,c));
            }
            else{
                string temp="";
                while(st.top()!="["){
                    temp=st.top() +temp;
                    st.pop();
                }
                st.pop();
                string k=" ";
                while(!st.empty() && isdigit(st.top()[0])){
                    k=st.top()+k;
                    st.pop();   
                }
                int repeated=stoi(k);   
                string repeatedString="";
                for(int i=0;i<repeated;i++){
                    repeatedString+=temp;
                }
                st.push(repeatedString);
            }
        }
        string res="";
        while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        return res;
    }
};