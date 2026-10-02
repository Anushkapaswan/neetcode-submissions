class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int largest_consq=0;
        for(auto ele:st){
            if(!st.count(ele-1)){
                int element=ele;
                int count=1;
                while(st.find(element+1)!=st.end()){
                    element++;
                    count++;
                }
                largest_consq=max(largest_consq,count);
            }
        }
        return largest_consq;
    }
};
