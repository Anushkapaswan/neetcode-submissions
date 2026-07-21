class Solution {
public:
int rows;
int cols;
int inf=INT_MAX;
vector<vector<int>>dir={{-1,0},{1,0},{0,1},{0,-1}};
int bfs(vector<vector<int>>&grid,int r,int c){
    queue<pair<int,int>>q;
    vector<vector<bool>>visited(rows,vector<bool>(cols,false));
    int dis=0;
    visited[r][c]=true;
    q.push({r,c});
    while(!q.empty()){
        int size=q.size();
        while(size--){

        auto cell= q.front();
        q.pop();
        int i=cell.first;
        int j=cell.second;
        if(grid[i][j]==0) return dis;
        for(int d=0;d<4;d++){
            int cr=i+dir[d][0];
            int cc=j+dir[d][1];
            if(cr<0 || cc<0 || cr>=grid.size() ||cc>=grid[0].size()) continue;
            if(grid[cr][cc]==-1) continue;
            if(visited[cr][cc]) continue;
            visited[cr][cc]=true;
            q.push({cr,cc});
        }
    }
    dis++;
        }
    return inf;
}
    void islandsAndTreasure(vector<vector<int>>& grid) {
        rows=grid.size();
        cols=grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==inf){
                    grid[i][j]=bfs(grid,i,j);
                }
            }
        }
        return;
    }
};
