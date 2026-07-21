class MyHashMap {
public:

    vector<pair<int,int>> p;

    MyHashMap() {
        
    }
    
    void put(int key, int value) {

        bool flag = false;

        for(auto &ele : p) {

            int fstEle = ele.first;

            if(fstEle == key) {
                flag = true;
                ele.second = value;
            }
        }

        if(flag) return;

        p.push_back({key, value});
    }
    
    int get(int key) {

        for(auto ele : p) {

            if(key == ele.first) {
                return ele.second;
            }
        }

        return -1;
    }
    
    void remove(int key) {

        for(auto i = p.begin(); i != p.end(); i++) {

            if(key == i->first) {
                p.erase(i);
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