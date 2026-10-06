// using the sliding window approach
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=n;
        while(i<j){
            int m=0;
            int o=i+1;
            while(o<n && m<k){
                if(nums[i]==nums[o]){
                    return true;
                }
                o++;
                m++;
                }
                i++;
            }
        return false;

    }
};