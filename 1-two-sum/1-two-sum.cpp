class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for (int i=0; i<nums.size(); i++)
        {
            hash[nums[i]] = i;
        }
        for (int i = 0; i<nums.size(); i++)
        {
            int dif = target - nums[i];
            if ( hash.find(dif) != hash.end() && hash[dif] != i )
            {
                return {i, hash[dif] };
            }
        }
        vector<int> v;
        return v;
    }
};