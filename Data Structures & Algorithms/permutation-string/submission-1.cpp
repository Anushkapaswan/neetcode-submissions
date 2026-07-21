class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>f1(26,0),f2(26,0);
        for(auto ch:s1){
            f1[ch-'a']++;
        }
        int size=s1.size();
        for(int i=0;i<s2.size();i++){
            f2[s2[i]-'a']++;
            if(i>=size){
                f2[s2[i-size]-'a']--;
            }
            if(f1==f2) return true;
        }
        return false;
    }
};
