class NumMatrix {
    private:
    vector<vector<int>>preSum;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        preSum=vector<vector<int>>(rows,vector<int>(cols,0));
        for(int row=0;row<rows;row++){
            preSum[row][0]=matrix[row][0];
            for(int col=1;col<cols;col++){
                preSum[row][col]=matrix[row][col]+preSum[row][col-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int res=0;
        for(int row=row1;row<=row2;row++){
            if(col1>0){
                res+=preSum[row][col2]-preSum[row][col1-1];
            }else{
                res+=preSum[row][col2];
            }
        }
        return res;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */