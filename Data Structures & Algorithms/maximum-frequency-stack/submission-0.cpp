class FreqStack {
public:
    priority_queue<pair<int, pair<int,int> >> pq;
    unordered_map<int,int>mp;
    int indx=0;
    FreqStack() {
        
    }
    void push(int val) {
        mp[val]++;
        pq.push({mp[val],{indx ,val}});
        indx++;
    }
    int pop(){
        while(!pq.empty()){
        auto ele=pq.top();
        int freq=ele.first;
        int val=ele.second.second;
        if(mp[val]==freq){
            mp[val]--;
            pq.pop();
            return val;
        }
        else{
            pq.pop();
        }
        }
        
        return -1;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */