class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        priority_queue<pair<int,int >>pq;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        // now put all the elements in max heap according to frequent element
        for(auto ele:mp){
            pq.push({ele.second,ele.first});
        }
        // now put element into answer
        vector<int>ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
