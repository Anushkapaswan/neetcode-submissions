class Solution {
public:
    int maxArea(vector<int>& heights) {
      int mxRes=0;
      int i=0;
        int j=heights.size()-1;
        while(i<j){
            int area=min(heights[i],heights[j])*(j-i);
            mxRes=max(area,mxRes);
            if(heights[i]<heights[j]) i++;
            else j--;
        }

        return mxRes;
    }
};
