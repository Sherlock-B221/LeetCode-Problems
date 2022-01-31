class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = 0;
        int n = nums.size();
        for ( auto a : nums ) s+=a;
        return n*(n+1)/2 - s;
    }
};