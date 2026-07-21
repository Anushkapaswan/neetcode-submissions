class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            int r=0;
            int c=n-1;
            while(r<=c){
                int mid=r+(c-r)/2;
                if(matrix[i][mid]==target) return true;
                else if(matrix[i][mid]>target) c=mid-1;
                else r=mid+1;
            }
        }
        return false;
    }
};
