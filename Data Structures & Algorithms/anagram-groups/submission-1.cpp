class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // using hash map 
        unordered_map<string,vector<string>>mp;
        for(auto s:strs){
            string sortIt=s;
            sort(sortIt.begin(),sortIt.end());
            mp[sortIt].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto str:mp){
            ans.push_back(str.second);
        }
        return ans;
    }
};
