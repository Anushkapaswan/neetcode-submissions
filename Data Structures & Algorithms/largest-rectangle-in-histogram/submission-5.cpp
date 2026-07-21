class Solution {
public:
    // to calculte the pse
    int pse(vector<int>&arr,int i){
        int j=i-1;
        while(j>=0){
            if(arr[j]<arr[i]) break;
            j--;
        }
        return j;
    }

    // to calcula the nse
    int nse(vector<int>&arr,int i,int n){
        int j=i+1;
        while(j<n){
           if(arr[j]<arr[i]) break;
           j++;
        }
        return j;
    }

    int largestRectangleArea(vector<int>& heights) {
        // brute force solution using pse and nse
        int n=heights.size();
        int maxArea=0;
        for(int i=0;i<n;i++){
            int preSmEle=pse(heights,i);
            int nxtSmEle=nse(heights,i,n);
            int area=heights[i]*(nxtSmEle-preSmEle-1);
            maxArea=max(maxArea,area);
        }
    return maxArea;
    }
};
