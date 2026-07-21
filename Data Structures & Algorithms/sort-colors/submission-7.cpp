class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto ele:nums){
            mp[ele]++;
        }
        int count_0=0;
        int count_1=0;
        int count_2=0;
        for(auto ele:mp){

            if(mp.find(0)!=mp.end()){
                count_0=mp[0];
                for(int i=0;i<count_0;i++){
                    nums[i]=0;
                }
            }
            if(mp.find(1)!=mp.end()){
                count_1=mp[1];
                for(int i=count_0;i<count_0+count_1;i++){
                    nums[i]=1;
                }
            }
            if(mp.find(2)!=mp.end()){
                count_2=mp[2];
                for(int i=count_0+count_1;i<nums.size();i++){
                    nums[i]=2;
                }
            }
        }
        return;
    }
};