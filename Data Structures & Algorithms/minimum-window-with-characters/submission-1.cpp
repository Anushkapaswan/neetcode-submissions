class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>tc;
        for(auto ch:t){
            tc[ch]++;
        }
        pair<int,int>p={-1,-1};
        int resLen=INT_MAX;
        for(int i=0;i<s.length();i++){
            unordered_map<char,int>sc;
            for(int j=i;j<s.length();j++){
                sc[s[j]]++;
                bool flag=true;
                for(auto &[c,ct]:tc){
                    if(sc[c]<ct){
                        flag=false;
                        break;
                    }
                }
                if(flag && j-i+1<resLen){
                    resLen=j-i+1;
                    p={i,j};
                }
            }

        }
        if(resLen!=INT_MAX) return s.substr(p.first,resLen);
        return "";
    }
};
