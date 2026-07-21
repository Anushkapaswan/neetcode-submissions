class Solution {
public:
    int majorityElement(vector<int>& nums) {
     unordered_map<int,int>mp;
     for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
     }  
     int mxEle=0;
     int ans=0;
     for(auto ele:mp){
        if(ele.second>mxEle){
            mxEle=ele.second;
            ans=ele.first;
        }
     }
     return ans;
    }
};