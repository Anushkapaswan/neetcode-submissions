class TimeMap {
public:
unordered_map<string,vector<pair<int ,string>>>keystore;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        keystore[key].emplace_back(timestamp,value);
    }
    
    string get(string key, int timestamp){
        if(keystore.find(key)==keystore.end()) return "";
        string result="";
        auto& values=keystore[key];
        int l=0;
        int r=values.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(values[mid].first<=timestamp){
                result=values[mid].second;
                l=mid+1;
            }
            else r=mid-1;
        }
        return result;
    }
};
