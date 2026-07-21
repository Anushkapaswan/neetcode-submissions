class Solution {
public:
    int search(vector<int>& nums, int target) {
        // step one to find the pivot index with minimum element 
        // and then find the target element
        int n=nums.size();
        int lo=0;
        int hi=nums.size()-1;
        int pivot=-1;
        if(n==1){
            if(nums[0]==target) return 0;
            else return -1;
        }
        if(n==2){
            if(nums[0]==target) return 0;
            if(nums[1]==target) return 1;
            else return -1;
        }
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(mid==0) lo=mid+1;
            else if(mid==n-1) hi=mid-1;
            else if(nums[mid]<nums[mid+1] && nums[mid]<nums[mid-1]){
                pivot=mid;
                break;
            }
            else if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                pivot=mid+1;
                break;
            }
            else if(nums[mid]>nums[hi]) lo=mid+1;
            else hi=mid-1;
        }
        // if pivot index is found
        if(pivot!=-1){
            if(target<=nums[pivot-1] && target>=nums[0]){
                lo=0;
                hi=pivot-1;
                while(lo<=hi){
                    int mid=lo+(hi-lo)/2;
                    if(target==nums[mid]) return mid;
                    else if(nums[mid]<target) lo=mid+1;
                    else hi=mid-1;
                }
            }
            else{
                lo=pivot;
                hi=n-1;
                while(lo<=hi){
                    int mid=lo+(hi-lo)/2;
                    if(target==nums[mid]) return mid;
                    else if(nums[mid]<target) lo=mid+1;
                    else hi=mid-1;
                }
            }
        }
        // if pivot ==-1 it means array is not ratated 
        else{
            lo=0;
            hi=n-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                    if(target==nums[mid]) return mid;
                    else if(nums[mid]<target) lo=mid+1;
                    else hi=mid-1;
            }
        }
        return -1;
    }
};
