class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(auto ch:s){
            if(!isalnum(ch)) continue;
            else{
                str+=tolower(ch);
            }
        }
        string revStr=str;
        reverse(revStr.begin(),revStr.end());
        if(revStr==str) return true;
        return false;
    }
};
