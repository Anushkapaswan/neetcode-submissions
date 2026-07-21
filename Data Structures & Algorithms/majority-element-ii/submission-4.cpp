class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;
        int n=nums.size();
        for(auto ele:mp){
            int count=ele.second;
            if(count>(n/3)) ans.push_back(ele.first);

        }
        return ans;
    }
};