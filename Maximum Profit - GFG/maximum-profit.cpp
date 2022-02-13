// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxProfit(int k, int n, int prices[]) {
        
        int totalProfit = 0;
        int profit[k+1][n+1];
        
        for ( int i = 0; i<= k; i++ ) {
            profit[i][0] = 0;
        }
        for ( int i = 0; i<= n; i++ ) {
            profit[0][i] = 0;
        }
        
        for ( int i = 1; i<= k; i++ ) {
            int maxProfit = INT_MIN;
            // int minVal = INT_MAX;
            
            for ( int j = 1; j <= n; j++ ) {
                maxProfit = max(maxProfit, profit[i-1][j-1] - prices[j - 1] );
                profit[i][j] = max(profit[i][j-1], prices[j] + maxProfit) ;
            }
        }
        
        
        return profit[k][n-1];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}  // } Driver Code Ends