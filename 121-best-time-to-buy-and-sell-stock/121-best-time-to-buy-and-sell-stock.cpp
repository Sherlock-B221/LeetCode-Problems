class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = INT_MAX;
        int maxProfit = 0;
        for ( auto e : prices ) {
            m = min(e,m);
            maxProfit = max( e - m, maxProfit );
            
        }
        return maxProfit;
    }
};