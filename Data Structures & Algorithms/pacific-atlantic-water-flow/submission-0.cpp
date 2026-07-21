class Solution {
public:
    int rows;
    int cols;
    vector<vector<int>>h;
    vector<vector<int>>dir={{-1,0},{1,0},{0,1},{0,-1}};

    // bfs implementation 
    vector<vector<bool>> bfs(queue<pair<int,int>>&q){
        vector<vector<bool>>visited(rows,vector<bool>(cols,false));
        while(!q.empty()){
            auto cell=q.front();
            int r=cell.first;
            int c=cell.second;
            q.pop();
            visited[r][c]=true;
            for(int d=0;d<4;d++){
                int nr=r+dir[d][0];
                int nc=c+dir[d][1];
                if(nr<0 || nc<0 || nr>=rows || nc>=cols) continue;
                if(h[nr][nc]<h[r][c]) continue;
                if(visited[nr][nc]) continue;
                q.push({nr,nc});
            }

        }
        return visited;
    }
        vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        rows =heights.size();
        cols=heights[0].size();
        h=heights;
        queue<pair<int,int>>pacificbfs;
        queue<pair<int,int>>atlanticbfs;

        // 
        for(int i=0;i<rows;i++){
            pacificbfs.push({i,0});
            atlanticbfs.push({i,cols-1});
        }
        for(int i=1;i<cols;i++){
            pacificbfs.push({0,i});
        }
        for(int i=0;i<cols-1;i++){
            atlanticbfs.push({rows-1,i});
        }
        vector<vector<bool>>pacific=bfs(pacificbfs);
        vector<vector<bool>>atlantic=bfs(atlanticbfs);
        vector<vector<int>>ans;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(pacific[i][j] && atlantic[i][j]) ans.push_back({i,j});
            }
        }
        return ans;
    }
};
