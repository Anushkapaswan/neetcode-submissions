class Solution {
public:
// optimal apprach than brute force;
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            unordered_set<int>st;
            for(int j=i+1;j<n;j++){
                int third=-(nums[i]+nums[j]);
                if(!st.empty() && st.find(third)!=st.end()){
                    vector<int>temp{nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    s.insert(temp);
                }
                st.insert(nums[j]);
            }
        }
        vector<vector<int>> ans{s.begin(),s.end()};
        return ans;
    }
};
