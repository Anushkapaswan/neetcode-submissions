class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // using extra space and also using one pointer
        vector<int>temp;
        int n=nums.size();
        int k=0;
        int ele=nums[0];
        temp.push_back(ele);
        for(int i=1;i<n;i++){
            if(nums[i]!=ele){
                ele=nums[i];
                temp.push_back(ele);
            }
            else k++;
        }
        for(int i=0;i<temp.size();i++){
            nums[i]=temp[i];
        }
        return n-k;
    }
};