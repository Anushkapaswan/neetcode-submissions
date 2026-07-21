class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    vector<int>pre_prod(nums.size(),1);
    vector<int>suff_prod(nums.size(),1);
    for(int i=1;i<nums.size();i++){
       pre_prod[i]=pre_prod[i-1]*nums[i-1];
    }
    for(int i=nums.size()-2;i>=0;i--){
       suff_prod[i]=suff_prod[i+1]*nums[i+1];
    }
     vector<int>result(nums.size());
     result[0]=suff_prod[0];
     for(int i=1;i<nums.size();i++){
        result[i]=pre_prod[i]*suff_prod[i];
     }
     return result;
    }
};
