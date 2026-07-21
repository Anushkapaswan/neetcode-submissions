class Solution {
public:

    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        vector<int>temp;
        int ele=nums[0];
        temp.push_back(ele);
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=ele){
                ele=nums[i];
                temp.push_back(ele);
            }
            else k++;
        }
        nums.resize(nums.size()-k);
        for(int i=0;i<temp.size();i++){
            nums[i]=temp[i];
        }
        return (n-k);
    }
};