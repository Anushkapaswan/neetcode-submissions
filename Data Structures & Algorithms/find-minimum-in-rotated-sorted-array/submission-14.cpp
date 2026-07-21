class Solution {
public:
    int findMin(vector<int> &nums) {
        // to find the pivot index i.e. index of minimum element of the array
        int pivot=-1;
        int low=0;
        int hi=nums.size()-1;
        int n=nums.size();
        if(n==1) return nums[0];
        if(nums[0]<=nums[n-1]) return nums[0];
        while(low<=hi){
            int mid=low+(hi-low)/2;
            if((mid==0 || nums[mid]<nums[mid-1]) && (mid==n-1 || nums[mid]<nums[mid+1] )){
                pivot=mid;
                return nums[mid];
            }else if((mid<n-1 && nums[mid]>nums[mid+1]) && (mid>0 &&  nums[mid]>nums[mid-1])){
                pivot=mid+1;
                return nums[pivot];
            }else if(nums[mid]>nums[hi]){
                low=mid+1;
            }else hi=mid-1;
        }
        return -1;
    }
};
