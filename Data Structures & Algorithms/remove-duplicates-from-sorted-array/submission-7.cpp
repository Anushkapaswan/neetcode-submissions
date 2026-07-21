class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // using two pointer ;
         int l=0;
         int r=0;
         while(r<nums.size()){
            nums[l]=nums[r];
            while(r<nums.size() && nums[l]==nums[r]){
                r++;
            }
            l++;
         }
         return l;
    }
};