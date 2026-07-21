class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1=word1.size();
        int l2=word2.size();
        string str="";
        if(l1<l2){
            for(int i=0;i<l1;i++){
                str.push_back(word1[i]);
                str.push_back(word2[i]);
            }
            string left=word2.substr(l1,l2-l1);
            str += left;
        }
        else{
            for(int i=0;i<l2;i++){
                str.push_back(word1[i]);
                str.push_back(word2[i]);

            }
            string left=word1.substr(l2,l1-l2);
            str += left;
        }
        return str;
    }
};