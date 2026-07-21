class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // optimal approach which have time complexity of n*3
        set<vector<int >> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                set<long long>hashset;
                for(int k=j+1;k<n;k++){
                    long long  sum=(long long)nums[i]+nums[j]+nums[k];
                    long long  forth=target-sum;
                    if(hashset.find(forth)!=hashset.end()){
                        vector<int>temp={nums[i],nums[j],nums[k],(int)forth};
                        sort(temp.begin(),temp.end());
                        st.insert(temp);
                    }
                    hashset.insert(nums[k]);
                }
            }
        }


        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};