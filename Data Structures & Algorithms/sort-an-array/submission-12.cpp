// insertion sort tc:-
// algorithm: select one element and place it one correct place from that position to its left
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            int j=i;
                while(j>0 && nums[j-1]>nums[j]){
                    swap(nums[j-1],nums[j]);
                    j--;
                }
            
        }
        return nums;
    }
};