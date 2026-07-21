class MyHashSet {
public:
// using bool array ;
    vector<bool>data=vector<bool>(10000001,false);
    MyHashSet() {
        
    }
    
    void add(int key) {
        data[key]=true;
    }
    
    void remove(int key) {
        data[key]=false;
    }
    
    bool contains(int key) {
        return data[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */