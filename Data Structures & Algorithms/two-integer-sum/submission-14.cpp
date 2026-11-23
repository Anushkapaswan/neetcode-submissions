class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // using unordered_map
        unordered_map<int,int>mp;
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int rem=target-nums[i];
             if(!mp.empty() && mp.find(rem)!=mp.end()){
                ans.push_back(mp[rem]);
                ans.push_back(i);
             }
             mp[nums[i]]=i;
        }
        return ans;
    }
};
