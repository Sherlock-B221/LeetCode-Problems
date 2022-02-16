class Solution {
public:
    Solution(){ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);}
    int maxProfit(vector<int>& prices) {
        int m = INT_MAX;
        int maxProfit = 0;
        for ( auto e : prices ) {
            m = min(e,m);
            maxProfit = max( e - m, maxProfit );
//             scam comment
        }
        return maxProfit;
    }
};