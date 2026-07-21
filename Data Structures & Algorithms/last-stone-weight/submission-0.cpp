class Solution {
public:
// default it is max heap
   priority_queue<int>pq;
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        for(int i=0;i<n;i++){
            pq.push(stones[i]);
        }
        while(pq.size()>1){
            int y=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if(x==y) continue;
            else if(y>x) pq.push(y-x);
        }
        if(pq.size()==1) return pq.top();
        return 0;
    }
};
