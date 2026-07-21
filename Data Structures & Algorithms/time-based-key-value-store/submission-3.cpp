class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>key_value;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        key_value[key].emplace_back(timestamp,value);
    }
    
    string get(string key, int timestamp) {
        if(key_value.find(key)==key_value.end()) return "";
        string result="";
        auto& val=key_value[key];
        int lo=0;
        int hi=val.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(val[mid].first<=timestamp){
                result=val[mid].second;
                lo=mid+1;
            }
            else hi=mid-1;
        }
        return result;
    }
};
