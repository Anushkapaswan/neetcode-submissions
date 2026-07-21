class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int len=0;
        int sum=0;
        int i=0;
        ans=INT_MAX;
        int j=0;
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