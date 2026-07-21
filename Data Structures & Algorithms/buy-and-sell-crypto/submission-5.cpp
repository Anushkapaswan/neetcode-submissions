// two pointer approach
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int j=1;
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
