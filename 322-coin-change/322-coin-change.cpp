class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n+1, vector<int> (amount + 1, -1));
        
        //   0 1 2 3 4 5 6 7 8 9 10 11
        // 0 (int max - 1) because no coins are there / -1 acc to question
        // 1 0
        // 2 0
        // 3 0
        
        for ( int i = 0; i<=n; i++)
            dp[i][0] = 0;
        for ( int i = 1; i<=amount; i++)
            dp[0][i] = INT_MAX - 1;
        
        for ( int i = 1; i<=n; i++) {
            for (int j = 1; j<=amount; j++) {
                if ( coins[i-1] <= j ) {
                    dp[i][j] = min ( 1 + dp[i][j - coins[i-1]], dp[i-1][j]);
                } else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        if ( dp[n][amount] > amount )
            return -1;
        else return dp[n][amount];
    
        
    }
};