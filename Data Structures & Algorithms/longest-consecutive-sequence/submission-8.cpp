class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // using the brute force 
    //     if(nums.size()==0) return 0;
    //  sort(nums.begin(),nums.end());
    //  int largest_seq=1;
    //     int count=1;
    //     for(int j=1;j<nums.size();j++){
    //         if(nums[j]==nums[j-1]) continue;
    //         else if(nums[j]-1==nums[j-1]) count++;
    //         else count=1;
    //     largest_seq=max(count,largest_seq);
    //     }

        // using unorder_set 
        // 1st step is to inset all the element into set then find the starting point and then count till its sequence present
         
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
