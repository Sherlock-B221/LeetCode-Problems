class Solution {
public:
    string shortestCommonSupersequence(string s1, string s2) {
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
        // total length dono ki milaake - length of common subsequence
        
         // cout<<m+n - dp[n][m]; //Prints the length of shortestCommonSupersequence
        
        int i = n;
        int j = m;
        string ans = "";
        
        while ( i>0 && j>0) {
            if ( s1[i-1] == s2[j-1] ) {
                ans += s1[i-1];
                i--;
                j--;
            } else {
//                 if ( i == 0 || j == 0 ) {
                    
//                 }
                if ( dp[i-1][j] > dp[i][j-1] ) {
                    ans += s1[i-1];
                    i--;
                } else{
                    ans += s2[j-1];
                    j--;
                }
            }
            
        }
        
        if ( i == 0 ){
            for (;j>0;j--)
            {
                ans+=s2[j-1];
            }
        }
        if( j==0){
            for(;i>0;i--)
            {
                ans+=s1[i-1];
            }
        }
        
        cout<<ans<<" ";
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};