class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
       if(k==0) return 0; // base case
        int n = prices.size();
        vector<pair<int, int>> dp(k, {INT_MAX, 0}); // vector <buy price, profit>
        for(int i=0; i<n; i++)
        {
            dp[0].first = min(dp[0].first, prices[i]); // choose minimum BUY PRICE
            dp[0].second = max(dp[0].second, prices[i]-dp[0].first); // find profit if bought at MINIMUM PRICE and sold at prices[i];
            
            for(int j=1; j<k; j++)
            {
                dp[j].first = min(dp[j].first, prices[i]-dp[j-1].second); // choose minimum BUY PRICE
                dp[j].second = max(dp[j].second, prices[i] - dp[j].first);// choose maximum profit if bought at MINIMUM PRICE ABOVE AND SOLD AT prices[i];
            }
        }
        return dp[k-1].second;
    }
};