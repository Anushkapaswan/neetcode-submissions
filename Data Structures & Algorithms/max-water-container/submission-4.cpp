class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int maxWater=0;
        while(i<=j){
            int area=min(heights[i],heights[j])*(j-i);
            maxWater=max(maxWater,area);
            if(heights[i]>heights[j]) j--;
            else i++;
        }
        return maxWater;
    }
};
