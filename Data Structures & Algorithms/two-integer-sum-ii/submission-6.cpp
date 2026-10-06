// using two pointer sorted is given 
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int n=numbers.size();
        int j=n-1;
        vector<int>ans;
        while(i<=j){
            int sum=0;      
            sum+=numbers[i];
            sum+=numbers[j];
            if(sum>target){
                j--;
            }
            else if(sum==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            else{ //sum<target
                i++;
            }
        }
        return ans;
    }
};
