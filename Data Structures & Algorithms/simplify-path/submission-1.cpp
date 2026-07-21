class Solution {
public:
    string simplifyPath(string path) {
        string result="";
        stack<string>st;
        for(int i=0;i<path.size();){
            if(path[i]=='/') {
                i++;
                continue;
            }
            string temp="";
            while(i<path.size() && path[i]!='/'){
                temp+=path[i];
                i++;
            }
            if(temp==".") continue;
            else if(temp==".."){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(temp);
            }
        }
        if(st.empty()) return "/";
        while(!st.empty()){
        result='/'+ st.top() + result;
        st.pop();
        }
        return result;
    }
};