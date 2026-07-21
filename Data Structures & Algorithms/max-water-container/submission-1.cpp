class Solution {
public:
    int maxArea(vector<int>& heights) {
        //  using brute force;
        int res=0;
        // for(int i=0;i<heights.size();i++){
        //     for(int j=i+1;j<heights.size();j++){
        //         int area=min(heights[i],heights[j])*(j-i);;
        //         res=max(area,res);
        //     }
        // }

        // using two pointer
        int i=0;
        int j=heights.size()-1;
        while(i<j){
            int area=min(heights[i],heights[j])*(j-i);
            res=max(area,res);
            if(heights[i]<heights[j]) i++;
            else j--;
        }
        return res;
    }
};
