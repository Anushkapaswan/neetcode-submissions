class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto ele:nums){
            st.insert(ele);
        }
        if(st.find(1)==st.end()) return 1;
        int n=nums.size();
        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end()) return i;
        }
    }
};