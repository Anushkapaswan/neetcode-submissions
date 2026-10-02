class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l=word1.length();
        int m=word2.length();
        string result="";
        int i=0;
        int j=0;
        while(i<l && j<m){
            result+=word1[i];
            result+=word2[j];
            i++;
            j++;
        }
        while(i<l){
            result+=word1[i];
            i++;
        }
        while(j<m){
            result+=word2[j];
            j++;
        }
        return result;
    }
};