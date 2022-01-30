class Solution {
public:
    int store ( vector<int>& nums, int cur ){
       if ( cur == nums[cur] )
           return cur;
        int n = nums[cur];
        nums[cur] = cur;
        return store(nums,n);
   }
    int findDuplicate(vector<int>& nums) {
        
        return store(nums,0);
    }
};