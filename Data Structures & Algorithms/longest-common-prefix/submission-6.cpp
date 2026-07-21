class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pref=strs[0];
        int j;
        for(int i=1;i<strs.size();i++){
            j=0;
            while(j<min(strs[i].length(),pref.length())){
              if(pref[j]!=strs[i][j]) break;
              j++;
            }
           pref=pref.substr(0,j);
        }
        return pref;
    }
};