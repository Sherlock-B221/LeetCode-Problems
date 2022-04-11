class Solution {
public:
    int longestPalindromeSubseq(string str) {
        int n = str.length();   
        string s = str;
        reverse(s.begin(),s.end());
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        
        for ( int i = 0; i<n+1; i++) {
            for (int j = 0; j<n+1; j++) {
                if ( i == 0 || j == 0 )
                    dp[i][j] = 0;
                else if ( str[i-1] == s[j-1] ) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else {
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        
        
        
        
        return dp[n][n];
        
    }
};