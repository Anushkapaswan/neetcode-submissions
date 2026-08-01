class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        // using min heap

        priority_queue<pair<int, pair<int,int>>, 
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> pq;    

        for(auto ele:points){
            int x=ele[0];
            int y=ele[1];
            int sqr=x*x+y*y;
            pq.push({sqr, {x,y}});
        }
        // iterate the min heap 
        while(k && !pq.empty()){
          auto ele=pq.top();
            pq.pop();
            pair<int,int>p=ele.second;
            int x=p.first;
            int y=p.second;
            ans.push_back({x,y});  
            k--;
        }
    return ans;
    }
};
