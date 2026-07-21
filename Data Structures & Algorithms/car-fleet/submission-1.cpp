class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed){
        vector<pair<int,double>>p;
        int fleet=0;
        double prevTime=0;
        for(int i=0;i<position.size();i++){
            double time=(double)(target-position[i])/speed[i];
            p.push_back({position[i],time});
        }
        sort(p.begin(),p.end());
        for(int i=p.size()-1;i>=0;i--){
            if(p[i].second>prevTime){
                fleet++;
                prevTime=p[i].second;
            }
        }
        return fleet;
    }
};
 