class Solution {
public:

    int maxProfit(vector<int>& prices) {

        int i = 0;
        int n = prices.size();

        int profit = 0;

        while(i < n - 1) {

            // find buying day
            while(i < n - 1 && prices[i] >= prices[i + 1]) {
                i++;
            }
            int buy = prices[i];
            // find selling day
            while(i < n - 1 && prices[i] <= prices[i + 1]) {
                i++;
            }
            int sell = prices[i];

            profit += sell - buy;
        }

        return profit;
    }
};
