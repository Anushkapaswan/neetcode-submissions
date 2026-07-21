class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int largest_mx=0;
        for(auto ele:st){
            if(!st.count(ele-1)){
                int element=ele;
                int count=1;
                while(st.find(element+1)!=st.end()){
                    element++;
                    count++;
                }
                largest_mx=max(largest_mx,count);
            }
        }
        return largest_mx;
    }
};
