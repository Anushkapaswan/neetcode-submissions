class Solution {
public:

    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;
        if(n==1) return;

        while(i>=0 && nums[i]>=nums[i+1]) i--;
        if(i<0){
            reverse(nums.begin(),nums.end());
            return;
        }
        int j=n-1;
        while(j>=0 && nums[j]<=nums[i]) j--;
        swap(nums[i],nums[j]);
        reverse(nums.begin()+i+1,nums.end());
        return ;

    }
};