class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<pair<int,int>>closest;
        for(int i=0;i<arr.size();i++){
            closest.push_back({abs(x-arr[i]),arr[i]});
        }
        sort(closest.begin(),closest.end());
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(closest[i].second);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};