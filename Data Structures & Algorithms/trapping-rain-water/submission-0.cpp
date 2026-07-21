class Solution {
public:
    int trap(vector<int>& height) {
        // using nested loop
        int res=0;
        for(int i=0;i<height.size();i++){
            int leftMax=height[i];
            int rightMax=height[i];
            // to find the leftmost max
            for(int j=0;j<i;j++){
                leftMax=max(leftMax,height[j]);
            }
            // to find the rightmost max
            for(int j=i+1;j<height.size();j++){
                rightMax=max(rightMax,height[j]);
            }
            res+=min(leftMax,rightMax)-height[i];
        }
        return res;
    }
};
