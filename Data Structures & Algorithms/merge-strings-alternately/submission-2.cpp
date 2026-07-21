class Solution {
public:
// using two pointer
    string mergeAlternately(string word1, string word2) {
        int l1=word1.size();
        int l2=word2.size();
        int i=0;
        int j=0;
        string str;
        while(i<l1 && j<l2){
            str.push_back(word1[i]);
            str.push_back(word2[j]);
            i++;
            j++;
        }
        str+=word1.substr(i);
        str+=word2.substr(j);
        return str;

    }
};