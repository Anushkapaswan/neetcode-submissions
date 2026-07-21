class Solution {
public:
int rows;
int cols;
int inf=INT_MAX;
vector<vector<int>>dir={{-1,0},{1,0},{0,1},{0,-1}};
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        rows=grid.size();
        cols=grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==0){
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            auto cell=q.front();
            q.pop();
            int r=cell.first;
            int c=cell.second;
            for(int d=0;d<4;d++){
                int cr=r+dir[d][0];
                int cc=c+dir[d][1];
                if(cr<0 || cc <0 || cr>=rows || cc >=cols) continue;
                if(grid[cr][cc]!=inf) continue;
                grid[cr][cc]=grid[r][c]+1;
                q.push({cr,cc}); 
            }
        }
        return;
    }
};
