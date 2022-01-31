class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> m;
        if ( nums.size() == 1 && nums[0] == 1 ) return 2;
        for ( int i = 0; i<nums.size(); i++ ) {
            if ( nums[i] > 0 ) {
                m[nums[i]]++;
            }
        }
        for ( int i = 1; i<nums.size(); i++ ) {
            if ( m[i] < 1 ) {
                return i;
            }
        }
        return m[nums.size()] ? nums.size() + 1 : nums.size();
    }
};