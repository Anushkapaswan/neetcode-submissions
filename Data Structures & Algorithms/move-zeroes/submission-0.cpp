class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // one approach make a stack push all non zero element into it and also count number of zeros
        int count_zeroes=0;
        stack<int>st;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) st.push(nums[i]);
            else count_zeroes++;
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(count_zeroes>0){
              nums[i]=0;
              count_zeroes--;  
            } 
            else{
              nums[i]=st.top();  
              st.pop();
            } 
        }
        return;
    }
};