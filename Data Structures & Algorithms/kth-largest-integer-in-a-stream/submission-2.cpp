class KthLargest {
public:
    priority_queue<int>pq;
    int kth=0;
    KthLargest(int k, vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        kth=k;
    }
    
    int add(int val) {
        int count=0;
        int ans=0;
        pq.push(val);
        vector<int>popped;
        for(int i=0;i<kth-1;i++){
            popped.push_back(pq.top());
            pq.pop();
        }
        ans=pq.top();
        while(!popped.empty()){
            pq.push(popped.back());
            popped.pop_back();
        }
        return ans;
    }
};
