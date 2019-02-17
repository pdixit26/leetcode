Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.

Note that you cannot sell a stock before you buy one.

SOlution:
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()||prices.size()<2 )
            return 0;
        int maxP = 0;
        int minBuy = prices[0];
        for(int i=1;i<prices.size();i++)
        {
            minBuy = min(minBuy, prices[i]);
            maxP = max(maxP, prices[i] - minBuy);
        }
        return maxP;
    }
};