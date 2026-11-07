class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        int n=s.length();
        int m=t.length();
        if(n!=m) return false;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(int i=0;i<n;i++){
            mp[t[i]]--;
        }
        for(auto item: mp){
            if(item.second!=0) return false;

        }
        return true;
    }
};
