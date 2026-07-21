class Solution {
public:
// max heap
priority_queue<pair<int,pair<int,int>>>pq;
vector<vector<int>>result;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int m=points.size();
        int n=points[0].size();
        for(int i=0;i<m;i++){
                int dis=((points[i][0])*(points[i][0])+(points[i][1])*(points[i][1]));
                pq.push({dis,{points[i][0],points[i][1]}});
                if(pq.size()>k) pq.pop();
        }
        while(pq.size()){
            auto p=pq.top();
            pq.pop();
            int r=p.second.first;
            int c=p.second.second;
            result.push_back({r,c});
        }
        return result;
    }
};
