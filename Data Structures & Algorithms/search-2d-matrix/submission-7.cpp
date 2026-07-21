class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int row=matrix.size();
     int col=matrix[0].size();
     for(int i=0;i<row;i++){
        if(target>matrix[i][col-1]) continue;
        if(target<=matrix[i][col-1] && target>=matrix[i][0]){
            int left=0;
            int right=col-1;
            while(left<=right){
                int mid=left+(right-left)/2;
                if(matrix[i][mid]==target) return true;
                else if(matrix[i][mid]>target) right=mid-1;
                else left=mid+1;
            }
        }
     }   
    return false; 
    }
};
