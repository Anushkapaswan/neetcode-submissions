class Solution {
public:

    string encode(vector<string>& strs) {
           string result="";
           for(auto s:strs){
            int len=s.length();
            result+=to_string(len)+"#"+s;
           }
           return result;
    }
    vector<string> decode(string s) {
        // now read string to list of string 
        int i=0;
        vector<string>ans;
        while(i<s.length()){
            int j=i;
            while(s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            string word=s.substr(j+1,len);
            ans.push_back(word);
            i=j+1+len;
        }
        return ans;
    }
};
