// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int countWays( int *s, int m, int n, vector<vector<long long int>>& dp) {
        if ( n == 0 ) return 1;
        if ( m == 0 ) return 0;
        
        if ( dp[m][n] != -1 ) 
            return dp[m][n];
        
        if ( s[m-1] > n )
            return dp[m][n] = countWays( s, m-1, n, dp);
        else {
            return dp[m][n] = countWays( s, m, n - s[m-1], dp) +
                              countWays(s, m-1, n, dp);
        }
    }
  
    long long int count(int S[], int m, int n) {
        vector<vector<long long int>> dp( m+1, vector<long long int> (n+1,-1));
        
        return countWays(S, m, n, dp);
        
        
        
        //  dp[m+1][n+1]
        // 1 0 0 0 0 0 0 ....
        // 1 
        // 1
        // 1
        // 1
        // 1
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends