class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // using brute force i.e. horizontal scanning
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            while(j<min(strs[i].length(),prefix.length())){
                if(prefix[j]!=strs[i][j]) break;
                j++;
            }
        prefix=prefix.substr(0,j);
        }
        return prefix;
        
    }
};