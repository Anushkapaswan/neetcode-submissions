class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // we will use the unordered map to find the remaining element if there is exist then its 
        unordered_map<int ,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int remaining=target-nums[i];
            if(mp.find(remaining)!=mp.end()){
                ans.push_back(mp[remaining]);
                ans.push_back(i);
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};
