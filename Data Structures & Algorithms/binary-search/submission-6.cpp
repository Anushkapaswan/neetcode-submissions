class Solution {
public:
    int search(vector<int>& nums, int target) {
         int i=0,indx=nums.size()-1;
         while(i<=indx){
         int mid=i+ (indx-i)/2;
         if(nums[mid]==target) return mid;
         else if(nums[mid]>target) indx=mid-1;
         else i=mid+1;
         }
         return -1;
    }
};
