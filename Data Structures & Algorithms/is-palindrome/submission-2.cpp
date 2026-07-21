class Solution {
public:
// using 
    bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            if(!isalnum(s[i])) continue;
            else {
                str+=tolower(s[i]);
        }
        }
        string revStr=str;
         reverse(revStr.begin(),revStr.end());
        if(str==revStr) return true;
        else return false;
    }
};
