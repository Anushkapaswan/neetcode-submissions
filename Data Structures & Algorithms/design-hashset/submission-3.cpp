class MyHashSet {
public:
    vector<int>hash;
    MyHashSet() {
        
    }
    
    void add(int key) {
        bool flag=false;
        for(int i=0;i<hash.size();i++){
            if(hash[i]==key) flag=true;
        }
        if(flag) return;
        hash.push_back(key);
    }
    
    void remove(int key) {
        int k=0;
        for(int i=0;i<hash.size();i++){
            if(hash[i]!=key){
                hash[k]=hash[i];
                k++;
            }
        }
        hash.resize(k);
    }
    
    bool contains(int key) {
        for(int i=0;i<hash.size();i++){
            if(hash[i]==key) return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */