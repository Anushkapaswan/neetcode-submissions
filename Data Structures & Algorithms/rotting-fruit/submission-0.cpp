class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int fo=0;
        int min=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) fo++;
                else if(grid[i][j]==2) q.push({i,j});
            }
        }
        q.push({-1,-1});
        vector<vector<int>>dir={{-1,0},{1,0},{0,-1},{0,1}};
        while(!q.empty()){
            auto cell=q.front();
            q.pop();
            int r=cell.first;
            int c=cell.second;
            if(r==-1 && c==-1){
                min++;
                if(!q.empty()){
                    q.push({-1,-1});
                }
                else break;
            }
            else{
                for(int d=0;d<4;d++){
                    int nr=r+dir[d][0];
                    int nc=c+dir[d][1];
                    if(nr<0 || nc<0 || nr>=m || nc>=n ) continue;
                    if(grid[nr][nc]!=1) continue;
                    grid[nr][nc]=2;
                    fo--;
                    q.push({nr,nc});
                }
            }
        }
        return (fo==0) ? min-1 : -1;
    }
};
