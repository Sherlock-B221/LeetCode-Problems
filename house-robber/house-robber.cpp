class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),0);
        if(nums.size()==1){
            return nums[0];
        }
        else if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        else{
            dp[0]=nums[0];
            dp[1]=nums[1];
            dp[2]=nums[0]+nums[2];
        }
        for(int i=3;i<dp.size();i++){
            dp[i]=max(dp[i-2],dp[i-3])+nums[i];
        }
        return max(dp[nums.size()-1],dp[nums.size()-2]);
    }
};