class Solution {
public:
    unordered_map<int,int> m;
    int climbStairs(int n) {
        
        if ( n < 4 ) return n;
        
        if ( m[n] != 0 ) return m[n];
        
        
        return m[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};