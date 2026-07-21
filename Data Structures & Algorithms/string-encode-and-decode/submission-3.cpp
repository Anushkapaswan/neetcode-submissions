class Solution {
public:

    string encode(vector<string>& strs) {
        string str="";
        for(int i=0;i<strs.size();i++){
            int len=strs[i].length();
            str+=to_string(len)+"#"+strs[i];
    }
        return str;
    }
    vector<string> decode(string s) {
        int i=0;
        int j=0;
        int n=s.length();
        vector<string>ans;
        while(i<n){
            j=i;
            while(j<n && s[j]!='#'){
                j++;
            }
            int len=stoi(s.substr(i,j-i));
            string word=s.substr(j+1,len);
            ans.push_back(word);
            i=j+len+1;
        }
        return ans;
    }
};
