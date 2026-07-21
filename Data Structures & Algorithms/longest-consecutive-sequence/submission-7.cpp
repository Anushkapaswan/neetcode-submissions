class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // using the brute force 
        if(nums.size()==0) return 0;
     sort(nums.begin(),nums.end());
     int largest_seq=1;
        int count=1;
        for(int j=1;j<nums.size();j++){
            if(nums[j]==nums[j-1]) continue;
            else if(nums[j]-1==nums[j-1]) count++;
            else count=1;
        largest_seq=max(count,largest_seq);
        }
     return largest_seq;
    }
};
