class Solution {
public:
    int findMin(vector<int> &nums) {
        //  first step is to find the pivot element 
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int ans=0;
        while(lo<=hi){
            if(nums[lo]<nums[hi]) return nums[lo];
            int mid=lo+(hi-lo)/2;
            int prev=(mid-1+n)%n;
            int next=(mid+1+n)%n;
            if(nums[mid]<nums[prev] && nums[mid]<nums[next]){
               return nums[mid];  
            }
            else if(nums[mid]>nums[hi]) lo=mid+1;
            else hi=mid-1;
        }
        return nums[0];
    }
};
