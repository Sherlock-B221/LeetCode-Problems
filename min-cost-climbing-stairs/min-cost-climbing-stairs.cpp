class Solution {
public:
    
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int,int> dp;
        if ( cost.size() == 1 ) return cost[0];
        
        if ( cost.size() == 2 ) return min( cost[0], cost[1] );
        
        dp[0] = cost[0];
        dp[1] = cost[1];
        int ans = 0;
        
        for ( int i = 2; i < cost.size(); i++) {
            dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        }
        
        return min(dp[cost.size() - 1], dp[cost.size() - 2] );
    }
};