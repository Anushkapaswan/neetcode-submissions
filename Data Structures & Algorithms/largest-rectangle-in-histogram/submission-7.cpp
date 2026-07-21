class Solution {
public:
    // function to calculate the pse
    int pse(vector<int>&arr,int i){
        int j=i-1;
        while(j>=0){
            if(arr[j]<arr[i]) break;
            j--;
        }
        return j;
    }
    // to calculate the nse(next smallest element)
    int nse(vector<int>&arr,int i,int n){
        int j=i+1;
        while(j<n){
            if(arr[j]<arr[i]) break;
            j++;
        }
        return j;
    }
    int largestRectangleArea(vector<int>& heights) {
        // to calculate the pse(previous smallest index)
        // to store the nse (next smallest index);
        int n=heights.size();
        int maxArea=0;
        for(int i=0;i<n;i++){
            int l=pse(heights,i);
            int r=nse(heights,i,n);
            int area=heights[i]*(r-l-1);
            maxArea=max(area,maxArea);
        }
        return maxArea;
    }
};
