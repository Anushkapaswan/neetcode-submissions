class Solution {
public:
    int characterReplacement(string s, int k) {

        // brute force;

        // int res=0;
        // for(int i=0;i<s.size();i++){
        // unordered_map<char,int>mp;
        // int maxf=0;
        //     for(int j=i;j<s.size();j++){
        //         mp[s[j]]++;
        //         maxf=max(maxf,mp[s[j]]);
        //         if((j-i+1)-maxf<=k) res=max(res,j-i+1);
        //     }
        // }
        // return res;

        // sliding window

        vector<int>fre(26,0);
        int longest=0;
            int maxf=0;
        int left=0;
        for(int right=0;right<s.size();right++){
            fre[s[right]-'A']++;
            maxf=max(maxf,fre[s[right]-'A']);
            while((right-left+1)-maxf >k){
                fre[s[left]-'A']--;
                left++;
            }
            longest=max(longest,(right-left+1));
        }
        return longest;
    }
};
