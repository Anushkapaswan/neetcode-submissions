class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // reverse part and then reverse the whole
        int n=nums.size();
        k=k%n;
        int j=n-k-1;
        int i=0;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        i=n-k;
        j=n-1;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        reverse(nums.begin(),nums.end());
    }
};