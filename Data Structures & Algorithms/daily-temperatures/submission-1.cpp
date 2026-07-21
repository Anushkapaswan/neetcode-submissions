class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int i=0;
        int n=temperatures.size();
        vector<int>res(temperatures.size());
        while(i<n){
            int count=1;
            int j=i+1;
            while(j<n){
                if(temperatures[j]>temperatures[i]) break;
                j++;
                count++;
            }
            res[i]= (j==n)? 0 :count;
            i++;
        }
        return res;
    }
};