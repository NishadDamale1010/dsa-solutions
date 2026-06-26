// Last updated: 6/26/2026, 1:44:29 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int minPrice = prices[0];
        int bestProfit = 0;

        for(int i = 1; i < prices.size(); i++) {

            minPrice = min(minPrice, prices[i]);

            int profit = prices[i] - minPrice;

            bestProfit = max(bestProfit, profit);
        }

        return bestProfit;
    }
};