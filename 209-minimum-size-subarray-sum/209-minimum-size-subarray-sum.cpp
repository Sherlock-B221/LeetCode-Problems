class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minLength = INT_MAX;
        int left = 0;
        int sum = 0;
        for ( int i = 0; i<n; i++) {
            sum += nums[i];
            while ( sum >= target ){
                minLength = min(minLength, i + 1 - left);
                sum = sum - nums[left];
                left++;
            }
        }
        return minLength == INT_MAX ? 0 : minLength;
    }
};
