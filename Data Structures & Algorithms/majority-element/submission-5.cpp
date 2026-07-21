class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // using hash map
        unordered_map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        int mx=0;
        int ans=0;
        for(auto ele:mp){
            int sec=ele.second;
            if(sec>mx){
                mx=sec;
                ans=ele.first;
            }
        }
        return ans;
    }
};