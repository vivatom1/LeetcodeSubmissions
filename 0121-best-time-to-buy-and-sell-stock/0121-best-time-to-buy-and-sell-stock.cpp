class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,k,len=prices.size();
        k=len-1;
        int min_price=prices[0],max_profit=0;
        for(i=0;i<len;i++)
        {
            min_price = min(min_price, prices[i]);
            max_profit = max(max_profit, prices[i] - min_price);
        }
        return max_profit;
    }
};