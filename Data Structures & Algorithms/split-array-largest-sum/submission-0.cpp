class Solution {
public:

    int split(vector<int>&nums,int mid){
        int count=1;
        int subarraySum=0;
        for(int i=0;i<nums.size();i++){
            if(subarraySum+nums[i]<=mid){
                subarraySum+=nums[i];
            }
            else{
                count++;
                subarraySum=nums[i];
            }

        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int mx=INT_MIN;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(mx<nums[i]){
                mx=nums[i];
            }
        }
        int low=mx;
        int hi=sum;
        while(low<=hi){
            int mid=low+(hi-low)/2;
            int countSplit=split(nums,mid);
            if(countSplit>k) low=mid+1;
            else hi=mid-1;
        }
        return low;
    }
};