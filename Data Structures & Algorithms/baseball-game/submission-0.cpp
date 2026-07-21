class Solution {
public:
    int calPoints(vector<string>& oper) {
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<oper.size();i++){
            if(oper[i]!="+" && oper[i]!="C" && oper[i]!="D"){
             int num=stoi(oper[i]);
             ans.push_back(num);  
             st.push(num);
            }
            if(oper[i]=="C"){
              ans.pop_back();
              st.pop(); 
            } 
            if(oper[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                int add;
                add=a+b;
                ans.push_back(add);
                st.push(add);
            }
            if(oper[i]=="D"){
               int tp=st.top();
               int dbl=tp*2;
               ans.push_back(dbl); 
               st.push(dbl);
            }
        }
        int sum=0;
        for(auto ele:ans){
            sum+=ele;
        }
        return sum;
    }
};