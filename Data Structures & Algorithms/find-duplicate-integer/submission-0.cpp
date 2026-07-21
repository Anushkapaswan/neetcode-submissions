class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        int n=nums.size();
        int duplicate=0;
        for(int i=0;i<n;i++){
            if(st.find(nums[i])!=st.end()){
                duplicate=nums[i];
                break;
            }
            st.insert(nums[i]);

        }
        return duplicate;
    }
};
