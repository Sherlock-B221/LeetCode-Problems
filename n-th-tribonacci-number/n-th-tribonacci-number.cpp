class Solution {
public:
    unordered_map<int,int> m;
    int tribonacci(int n) {
        if ( n < 2 )
            return n;
        else if ( n == 2 ){
            return 1;
        }
        
        if ( m[n] )
            return m[n];
        
        return m[n] = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
    }
};