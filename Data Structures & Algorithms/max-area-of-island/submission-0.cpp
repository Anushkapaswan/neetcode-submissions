class Solution {
public:
int maxArea=0;
vector<vector<int>>dir={{-1,0},{1,0},{0,1},{0,-1}};
queue<pair<int,int>>q;
int  bfs(vector<vector<int>>&grid,int r,int c){
    int rows=grid.size();
    int cols=grid[0].size();
    grid[r][c]=0;
    int area=1;
    q.push({r,c});
    while(!q.empty()){
        auto cell=q.front();
        int i=cell.first;
        int j=cell.second;
        q.pop();
        for(int d=0;d<4;d++){
            int cr=i+dir[d][0];
            int cc=j+dir[d][1];
            if(cr<0 || cc<0 || cr>=rows || cc>=cols) continue;
            if(grid[cr][cc]==0) continue;
            grid[cr][cc]=0;
            q.push({cr,cc});
            area++;
            
        }
    }
        return area;
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0) continue;
                else if(grid[i][j]==1){
                maxArea=max(maxArea,bfs(grid,i,j));
                } 
            }
        }
        return maxArea;
    }
};
