class Solution {
public:
// using the hash map
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int>mp;
        vector<int>res;
        for(int i=0;i<numbers.size();i++){
        // now iterate mp and check target-numbers[i];
            int ele=target-numbers[i];
           if(mp.find(ele)!=mp.end()){
            res.push_back(mp[ele]+1);
            res.push_back(i+1);
            return res;

           }
            mp[numbers[i]]=i;
        }
    }
};
