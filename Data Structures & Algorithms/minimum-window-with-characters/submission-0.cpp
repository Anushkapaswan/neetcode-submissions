class Solution {
public:
    string minWindow(string s, string t) {
        // find the length of the each
        int n1=s.length();
        int n2=t.length();
        if(n2>n1) return "";
        // when both are of different size;
        unordered_map<char,int>countT;
        for(auto ch:t){
            countT[ch]++;
        }
        int resLen=INT_MAX;
        pair<int,int>p={-1,-1};
        for(int i=0;i<s.length();i++){
            unordered_map<char,int>countS;
            for(int j=i;j<s.length();j++){
                countS[s[j]]++;
                bool flag=true;
                for(auto &[c,cnt]:countT){
                    if(countS[c]<cnt){
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
