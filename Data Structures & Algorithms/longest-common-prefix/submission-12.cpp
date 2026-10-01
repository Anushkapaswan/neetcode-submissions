class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            while(j<min(str.length(),strs[i].length())){
                if(str[j]!=strs[i][j]) break;
                j++;
            }
             str=str.substr(0,j);
        }
        return str;
    }
};