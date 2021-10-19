class Solution {
public:
    unordered_map<int,int> dp;
    int fib(int n) {
        
        if ( n < 2) return n;
        
        if ( dp[n] != 0 ) {
            return dp[n];
        }
        
        // doing the actual sum here
        return dp[n] = fib(n-1) + fib(n-2); 
    }
};
