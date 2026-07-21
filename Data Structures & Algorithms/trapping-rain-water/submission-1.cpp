class Solution {
public:
    int trap(vector<int>& height) {
        // using nested loop
        int res=0;
        // for(int i=0;i<height.size();i++){
        //     int leftMax=height[i];
        //     int rightMax=height[i];
        //     // to find the leftmost max
        //     for(int j=0;j<i;j++){
        //         leftMax=max(leftMax,height[j]);
        //     }
        //     // to find the rightmost max
        //     for(int j=i+1;j<height.size();j++){
        //         rightMax=max(rightMax,height[j]);
        //     }
        //     res+=min(leftMax,rightMax)-height[i];
        // }

        // calculate using prefix and suffix 
        int n=height.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0]=height[0];
        suffix[n-1]=height[n-1];
        for(int i=1;i<height.size();i++){
            prefix[i]=max(prefix[i-1],height[i]);
        }
        for(int j=height.size()-2;j>=0;j--){
            suffix[j]=max(suffix[j+1],height[j]);
        }
        for(int i=0;i<height.size();i++){
            res+=min(prefix[i],suffix[i])-height[i];
        }
        return res;
    }
};
