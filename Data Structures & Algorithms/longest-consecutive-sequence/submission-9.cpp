class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int largest_seq=0;
         unordered_set<int>st(nums.begin(),nums.end());
         for(auto ele:st){
            // if the element is not present i.e. ele-1
            if(st.find(ele-1)==st.end()){
                 int currele=ele;
                 int count=1;
                 while(st.find(currele+1)!=st.end()){
                    count++;
                    currele++;
                }
                largest_seq=max(largest_seq,count);
            }
         }


     return largest_seq;
    }
};
