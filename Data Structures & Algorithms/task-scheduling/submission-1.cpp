class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>arr(26,0);
        for(int i=0;i<tasks.size();i++){
            arr[tasks[i]-'A']++;
        }
        // keeping all the element into the queue;
        priority_queue<int>pq;
        int result=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>0)
            pq.push(arr[i]);
        }
        while(!pq.empty()){
        vector<int>rem;
            int time=0;
            for(int i=0;i<n+1;i++){
                if(!pq.empty()){
                int maxFre=pq.top();
                    pq.pop();
                if(maxFre>1){
                    rem.push_back(maxFre-1);
                }
                time++;
                }
            }
            // now pq is empty again keep all the element into the 
            for(auto it:rem){
                pq.push(it);
            }
            if(pq.empty()) result+=time;
            else result+=n+1;
        }
        return result;
    }
};
