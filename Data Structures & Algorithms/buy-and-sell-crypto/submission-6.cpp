// sliding window  two pointer approach
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // window size si two
        int i=0;  //left pointer
        int j=1;  //right pointer 
        int mxProfit=0;
        while(j<prices.size()){
            if(prices[i]<prices[j]){
                mxProfit=max(mxProfit,prices[j]-prices[i]);
            }else{
                i=j; 
            }
            j++;
        }
        return mxProfit;
    }
};
