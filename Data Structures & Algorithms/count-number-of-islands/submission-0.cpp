class Solution {
public:
int result=0;
queue<pair<int,int>>q;
vector<vector<int>>dir={{-1,0},{1,0},{0,1},{0,-1}};

// bfs traversal
void bfs(vector<vector<char>>&grid,int r,int c){
    int rows=grid.size();
    int cols=grid[0].size();
    grid[r][c]='0';
    q.push({r,c});
    while(!q.empty()){
        auto cell=q.front();
        q.pop();
        int i=cell.first;
        int j=cell.second;
        for(int d=0;d<4;d++){
            int cr=i+dir[d][0];
            int cc=j+dir[d][1];
            if(cr<0|| cc<0|| cr>=rows || cc>=cols) continue;
            if(grid[cr][cc]=='0') continue;
            q.push({cr,cc});
            grid[cr][cc]='0';
        }
    }  
}
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='0') continue;
                else if(grid[i][j]=='1'){
                    result++;
                    bfs(grid,i,j);
                }
            }
        }
        return result;
        
    }
};
