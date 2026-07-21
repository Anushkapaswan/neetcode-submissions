class MyHashMap {
public:

    vector<pair<int,int>> mp;

    MyHashMap() {
        
    }
    
    void put(int key, int value) {

        bool flag = false;

        for(auto &ele : mp) {

            int fstEle = ele.first;

            if(fstEle == key) {
                flag = true;
                ele.second = value;
            }
        }

        if(flag) return;

        mp.push_back({key, value});
    }
    
    int get(int key) {

        for(auto ele : mp) {

            if(key == ele.first) {
                return ele.second;
            }
        }

        return -1;
    }
    
    void remove(int key) {
        for(auto i = mp.begin(); i != mp.end(); i++) {
            if(key == i->first) {
                mp.erase(i);
                return;
            }
        }
    }
};