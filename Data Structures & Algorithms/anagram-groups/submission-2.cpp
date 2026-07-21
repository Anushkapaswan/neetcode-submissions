class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // using hash table
        unordered_map<string,vector<string>>mp;
        for(string str:strs){
            vector<int>count(26,0);
            for(char ch:str){
                count[ch-'a']++;
            }
            string key=to_string(count[0]);
            for(int i=1;i<26;i++){
                key+=","+ to_string(count[i]);
            }
            mp[key].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto ele:mp){
            ans.push_back(ele.second);
        }
        return ans;
    }
};
