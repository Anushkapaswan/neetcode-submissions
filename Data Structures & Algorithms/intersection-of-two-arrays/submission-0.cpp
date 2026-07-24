class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>st;
        for(int i=0;i<nums1.size();i++){
            st.insert(nums1[i]);
        }
        set<int>result;
        vector<int>ans;
        for(int i=0;i<nums2.size();i++){
            if(st.count(nums2[i])>0) result.insert(nums2[i]);
        }
        for(auto ele: result){
            ans.push_back(ele);
        }
        return ans;
    }
};