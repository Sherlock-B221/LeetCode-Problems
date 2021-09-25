class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> m;
        for ( int i = 0; i< n; i++)
        {
            if ( m[nums[i]] == 0 )
                m[nums[i]] ++;
            else
                return true;
        }
        return false;
    }
};