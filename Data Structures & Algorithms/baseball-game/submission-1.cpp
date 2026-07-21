class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        vector<int>ans;
        int sum=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]!="+" && operations[i]!="D" && operations[i]!="C"){
                ans.push_back(stoi(operations[i]));
                st.push(stoi(operations[i]));
            }
            if(operations[i]=="+"){
                int stop=st.top();
                st.pop();
                int sctop=st.top();
                st.push(stop);
                int add=stop+sctop;
                ans.push_back(add);
                st.push(add);
            }
            if(operations[i]=="C"){
                st.pop();
                ans.pop_back();
            }
            if(operations[i]=="D"){
                int ftop=st.top();
                int double_ele=ftop*2;
                ans.push_back(double_ele);
                st.push(double_ele);
            }
        }
        // now iterate the ans to sum of all the elements 
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
        } 
        return sum;
    }
};