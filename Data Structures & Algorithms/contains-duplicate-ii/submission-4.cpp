// using for loop
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int j=i+1;
            int m=0;
            while(j<n && m<k){
                if(nums[i]==nums[j]) return true;
                j++;
                m++;
            }
        }
        return false;
    }
};