class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int ans = INT_MIN;
        int curr = 0;
        int n = nums.size();
        for ( int i = 0; i< n; i++) {
            curr = max( nums[i], curr + nums[i]);
            ans = max(ans, curr);
        }
        return ans;
    }
};