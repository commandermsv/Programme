class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mint = prices[0];
        int maxt = 0;
        
        for (int i = 1; i < prices.size(); i++) {
            mint = min(mint, prices[i]);
            maxt= max(maxt, prices[i] - mint);
        }
        
        return maxt;
    }
};