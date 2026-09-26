class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;
        int bestbuy = prices[0];
        for(int i=1;i<prices.size();i++){
            if(bestbuy < prices[i]){
                mp = max(mp,prices[i]-bestbuy);
            }
            bestbuy = min(bestbuy,prices[i]);
        }
        return mp;
    }
};