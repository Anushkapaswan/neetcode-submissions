class MyHashMap {
public:
    vector<pair<int,int>>mp;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        bool flag=false;
        for(auto &ele:mp){
            int fst=ele.first;
            if(fst==key){
                flag=true;
                ele.second=value;
            }
        }
        if(flag) return ;
        mp.push_back({key,value});
    }
    
    int get(int key) {
        int mapped=-1;
        for(auto ele:mp){
            if(ele.first==key){
                mapped=ele.second;
            }
        }
        return mapped;
    }
    
    void remove(int key) {
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->first==key){
                mp.erase(i);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */