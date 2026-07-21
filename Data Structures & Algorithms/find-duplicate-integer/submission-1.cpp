class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // unordered_set<int>st;
        // int n=nums.size();
        // int duplicate=0;
        // for(int i=0;i<n;i++){
        //     if(st.find(nums[i])!=st.end()){
        //         duplicate=nums[i];
        //         break;
        //     }
        //     st.insert(nums[i]);

        // }
        // return duplicate;

        // using map
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int duplicate=0;
        for(auto ele:mp){
            int temp=ele.second;
            if(temp>1){
                duplicate=ele.first;
                break;
            }
        }
        return duplicate;
    }
};
