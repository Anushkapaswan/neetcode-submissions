class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // sliding window
        int i=0;
        int j=0;
        int sum=0;
        int n=nums.size();
        int len=0;
        int ans=INT_MAX;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                sum-=nums[i];
                len=j-i+1;
                ans=min(len,ans);
                i++;
            }
            j++;
        }
        if(len==0) return 0;
        return ans;
    }
};