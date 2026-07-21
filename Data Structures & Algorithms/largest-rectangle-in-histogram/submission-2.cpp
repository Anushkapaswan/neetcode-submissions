class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // // using brute force the largest area is :-; 
        //  int maxArea=0;
        //  for(int i=0;i<heights.size();i++){
        //     int height=heights[i];
        //     int leftMost=i;
        //     int rightMost=i+1;
        //     int n=heights.size();
        //     // to find the rightmost index which is larger or greater thea n the current height

        //     while(rightMost<n && heights[rightMost]>=height){
        //      rightMost++;
        //     }

        //     // to find the leftMost larger or equal to the current heighgt
        //     while(leftMost>=0 && heights[leftMost]>=height){
        //         leftMost--;
        //     }
        //     leftMost++;
        //     rightMost--;
        //     int area=height*(rightMost-leftMost+1);
        //     maxArea=max(maxArea,area);
        //  }
        //  return maxArea;

        // now using the stack 
        stack<int>st;
        int n=heights.size();
        int nsi[n];
        int psi[n];
        nsi[n-1]=n;
        psi[0]=-1;
        st.push(n-1);
        //keep the next smaller index than current
        for(int i=n-2;i>=0;i--){
               while(!st.empty() && heights[st.top()]>+heights[i]) st.pop();
               if(st.empty()) nsi[i]=n;
               else nsi[i] =st.top();
               st.push(i);
        } 
        stack<int>gt;
        gt.push(0);
        for(int i=0;i<n;i++){
               while(!gt.empty() && heights[gt.top()]>=heights[i]) gt.pop();
               if(gt.empty()) psi[i]=-1;
               else psi[i] =gt.top();
               gt.push(i);
        } 
        // now calculate the max area 
        int maxArea=0;
        for(int i=0;i<n;i++){
            int height=heights[i];
            int area=height*(nsi[i]-psi[i]-1);
            maxArea=max(maxArea,area);
        }
        return maxArea;
    }
};
