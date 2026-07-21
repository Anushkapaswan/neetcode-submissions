class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>posSpd;
        int n=position.size();
        for(int i=0;i<position.size();i++){
            posSpd.push_back({position[i],speed[i]});
        }
        sort(posSpd.rbegin(),posSpd.rend());
        double prevTime=(double)(target-posSpd[0].first)/posSpd[0].second;
        int fleet=1;
        for(int i=1;i<n;i++){
            double currTime=(double)(target-posSpd[i].first)/posSpd[i].second;
            if(prevTime<currTime){
             fleet++;
             prevTime=currTime;   
            } 
        }
        return fleet;
    }
};