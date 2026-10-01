 // selection sort tc:- O(n^2) and sc:-O(1)
// algorithm : select the minimum element and swap to that place and do it for n-1 times and each time find min element from n-i element 

class Solution {
public:
    vector<int> sortArray(vector<int>& nums){
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int mn=INT_MAX;
            int indx=i;
            for(int j=i;j<n;j++){
                if(nums[j]<mn){
                    mn=nums[j];
                    indx=j;
                }
            }
                swap(nums[i],nums[indx]);
        }
        return nums;
    }
};