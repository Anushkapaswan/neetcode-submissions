class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // using two pointer after sorting;
        vector<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back({nums[i],i});
        }
        sort(ans.begin(),ans.end());
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(ans[i].first+ans[j].first>target) j--;
            else if(ans[i].first+ans[j].first==target){
                return {min(ans[i].second,ans[j].second),max(ans[i].second,ans[j].second)};
            }
            else i++;
        }
        return {};
    }
};
