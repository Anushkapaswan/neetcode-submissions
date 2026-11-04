class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        vector<int>ans(2,-1);
        if(n==0) return ans;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==target){
                ans[0]=mid;
                j=mid-1;
            }
            else if(nums[mid]>target) j=mid-1;
            else i=mid+1;
        }
        // to find the last occurance
        i=0;
        j=n-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]==target){
                ans[1]=mid;
                i=mid+1;
            }
            else if(nums[mid]>target) j=mid-1;
            else i=mid+1;
        }
        return ans;
    }
};