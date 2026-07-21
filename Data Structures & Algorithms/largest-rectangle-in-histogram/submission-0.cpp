class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // using brute force the largest area is :-; 
         int maxArea=0;
         for(int i=0;i<heights.size();i++){
            int height=heights[i];
            int leftMost=i;
            int rightMost=i+1;
            int n=heights.size();
            // to find the rightmost index which is larger or greater thea n the current height

            while(rightMost<n && heights[rightMost]>=height){
                 rightMost++;
            }
            // to find the leftMost larger or equal to the current heighgt
            while(leftMost>=0 && heights[leftMost]>=height){
                leftMost--;
            }
            leftMost++;
            rightMost--;
            int area=height*(rightMost-leftMost+1);
            maxArea=max(maxArea,area);
         }
         return maxArea;
    }
};
