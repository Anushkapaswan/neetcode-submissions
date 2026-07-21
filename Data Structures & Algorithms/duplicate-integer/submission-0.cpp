class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // we can use unorder set which always contain the single value
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            if(map[nums[i]]>0){
                cout<<nums[i]<<endl;
                return true;
            }
            map[nums[i]]++;
        }
    return false;
    }
};