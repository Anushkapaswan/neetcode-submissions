class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int preMax=0;
        vector<int>ans;
        for(int i=0;i<k;i++){
            preMax=max(preMax,nums[i]);
        }
        ans.push_back(preMax);
        int i=1;
        int j=nums.size()-k;
        while(i<=j){
            int mx=nums[i];
            int m=i;
            while(m<k+i){
                mx=max(nums[m],mx);
                m++;
            }
            ans.push_back(mx);
            i++;
        }
        return ans;
        
    }
};
