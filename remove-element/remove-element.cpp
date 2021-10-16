class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto it = remove_if(nums.begin(), nums.end(), [=](int num){return num == val;});
        return it - nums.begin();
    }
};