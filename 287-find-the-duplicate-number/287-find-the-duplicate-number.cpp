class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int cur;
        int n = nums.size();
        for ( int i = 0; i<n; i++ ){
            cur = abs(nums[i]);
            
            if ( nums[cur] < 0 ) {
                return cur;
            }
            nums[cur] *= -1;
        }
        return -1;
    }
};