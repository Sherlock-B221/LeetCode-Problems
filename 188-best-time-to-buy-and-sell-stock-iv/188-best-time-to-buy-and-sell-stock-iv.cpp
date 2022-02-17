class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        if(k==0) return 0; // base case
        int n = prices.size();
        if (n==0) return 0;
        int dp[k+1][n]; // vector <buy price, profit>
        for ( int i = 0; i<= k; i++ ) {
            dp[i][0] = 0;
        }
        for ( int i = 0; i< n; i++ ) {
            dp[0][i] = 0;
        }       
        for ( int t = 1; t<=k; t++ ) {
            int maxP = INT_MIN;
            
            for ( int d = 1; d<n; d++) {
                 maxP = max( maxP, dp[t-1][d-1] - prices[d-1] );
                dp[t][d] = max( maxP + prices[d], dp[t][d-1] );
            }
        }
        return dp[k][n-1];
    }
};