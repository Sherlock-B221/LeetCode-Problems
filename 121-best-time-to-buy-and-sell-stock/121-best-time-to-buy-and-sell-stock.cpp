class Solution {
public:
    Solution(){ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);}
    int maxProfit(vector<int>& prices) {
         int buy=prices[0];
        int mp=0;
        for(int k=1;k<prices.size();k++){
            buy=min(buy,prices[k]);
            mp=max(mp,prices[k]-buy);
        }
        return mp;
    }
};