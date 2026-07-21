class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // using brute force 
        pair<int,int>p;
        p.first=0;
        for(int i=0;i<nums.size();i++){
            int count=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>p.first){
            p.first=max(p.first,count);
            p.second=nums[i];
            }
        }
        return p.second;
    }
};