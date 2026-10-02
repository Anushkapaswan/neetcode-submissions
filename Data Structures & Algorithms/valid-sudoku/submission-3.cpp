class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>>row(9);
        vector<set<char>>col(9);
        vector<set<char>>boxes(9);
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char num=board[i][j];
                int boxIndex=(i/3)*3+j/3;
                if(num=='.') continue;
                if(row[i].count(num) || col[j].count(num) || boxes[boxIndex].count(num)) return false;
                 row[i].insert(num);
                 col[j].insert(num);
                 boxes[boxIndex].insert(num);
             }
        }
        return true;
    }
};
