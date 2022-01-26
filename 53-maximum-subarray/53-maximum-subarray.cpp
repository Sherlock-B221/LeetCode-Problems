class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int ans = INT_MIN;
        int curr = 0;
        for ( int i = 0; i< nums.size(); i++) {
            curr = max( nums[i], curr + nums[i]);
            ans = max(ans, curr);
        }
        return ans;
    }
};