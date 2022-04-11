class Solution {
public:
//     MEMOIZATION
    
//     int LCS (string s1, string s2, int n, int m, vector<vector<int>> &dp){
//         if ( n == 0 || m == 0 )
//             return 0;
//         if ( dp[n][m] != -1 )
//             return dp[n][m];
        
//         if ( s1[n-1] == s2[m-1] )
//             return dp[n][m] = 1 + LCS( s1, s2, n-1, m-1, dp);
//         else
//             return dp[n][m] = max( LCS(s1, s2, n-1, m, dp), LCS(s1, s2, n, m-1, dp) );
        
//     }
    
    int longestCommonSubsequence(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        vector<vector<int>> dp(n+1, vector<int> (m+1,-1));
        // return LCS(s1, s2, n, m, dp);
        
        for ( int i = 0; i<=n; i++){
            for (int j = 0; j<=m; j++ ){
                if( i == 0 || j == 0 ){
                    dp[i][j] = 0;
                    continue;
                }
                if( s1[i-1] == s2[j-1] )
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max( dp[i-1][j], dp[i][j-1] );
            }
        }
        
        return dp[n][m];
         
    }
};