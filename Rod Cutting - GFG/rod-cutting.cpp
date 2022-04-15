// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int calc( int *price, int *length, int n, int m, vector<vector<int>>& dp){
        
        if ( n == 0 || m == 0 )
            return 0;
        if ( dp[n][m] != -1 )
            return dp[n][m];
            
        if ( length[n-1] > m ) {
            return dp[n][m] = calc(price, length, n-1, m, dp);
        } else {
            return dp[n][m] = max( price[n-1] + calc( price, length, n, m - length[n-1], dp),
            calc(price, length, n-1, m,dp) );
        }
        
        
        
    }
    int cutRod(int price[], int n) {
        vector<vector<int>> dp(n+1, vector<int> (n+1,-1));
        int length[n];
        for ( int i = 0; i<n; i++ )
            length[i] = i+1;
        return calc(price, length, n, n, dp);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends