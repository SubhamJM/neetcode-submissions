class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int current = 0;
        for (int i = 0; i < prices.size(); i++){
            if (prices[current] > prices[i]){
                current = i;
                continue;
            }

            max_profit = max(max_profit, prices[i] - prices[current]);
        }

        return max_profit;
    }
};
