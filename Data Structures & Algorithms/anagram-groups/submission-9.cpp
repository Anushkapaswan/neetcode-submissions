class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        // now iterate the vector
        for(auto str:strs){
            vector<int>count(26,0);
            for(auto ch: str){
                count[ch-'a']++;
            }
            // now make key of string
            string key=to_string(count[0]);
            for(int i=1;i<26;i++){
                key+=","+ to_string(count[i]);
            }
            // now push the key and value into the map
            mp[key].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto ele:mp){
            ans.push_back(ele.second);
        }
        return ans;
    }
};
