class Solution {
public:
    int search(vector<int>& nums, int target) {
        // first step is to find the pivot element i.e. smallest element of the given nums
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int pivot=0;
        if(n==1){
            if(nums[0]==target) return 0;
            return -1;
        }
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int prev=(mid-1+n)%n;
            int next=(mid+1+n)%n;
            if(nums[mid]<nums[prev] && nums[mid]<nums[next]){
                pivot=mid;
                break;
            }
            else if(nums[mid]>nums[prev] && nums[mid]>nums[next]){
                  pivot=mid+1;
                   break;
               } 
            else if(nums[mid]>nums[hi]) lo=mid+1;
            else hi=mid-1;
        }
        // here pivot element is found

        if(pivot==0){
            lo=0;
            hi=n-1;
            while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) hi=mid-1;
            else lo=mid+1;
            }
            return -1;
        }
        if(target>=nums[0] && target<=nums[pivot-1]){
            lo=0;
            hi=pivot-1;
            while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) hi=mid-1;
            else lo=mid+1;
            }
        }
        if(target>=nums[pivot] &&  target<=nums[n-1]){
            lo=pivot;
            hi=n-1;
            while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(target==nums[mid]) return mid;
            else if(target>nums[mid]) lo=mid+1;
            else hi=mid-1;
            }
        }
        return -1;
    }
};
