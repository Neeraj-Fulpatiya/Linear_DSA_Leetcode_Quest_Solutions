class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lastbuy=prices[0];

        int profit=0;

        for(int i=1;i<prices.size();i++){
            int sellpro=prices[i]-lastbuy;
            profit=max(profit, sellpro);
            lastbuy=min(lastbuy,prices[i]);
        }
    return profit;
    }
};