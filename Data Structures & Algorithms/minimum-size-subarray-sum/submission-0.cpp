class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        int len=0;
        int sum=0;
        int i=0;
        for(i=0;i<n;i++){
            sum+=nums[i];
            if(sum>=target){
                len=i+1;
                break;
            }
        }
        ans=len;
        if(len!=0){
            i=1;
            int j=1;
            while(i<n){
                j=i;
                sum=0;
                len=0;
                while(j<n){
                    sum+=nums[j];
                    if(sum>=target){
                        len=j-i+1;
                        ans=min(len,ans);
                        break;
                    }
                    j++;
                }
                i++;
            }
        }
        return ans;
    }
};