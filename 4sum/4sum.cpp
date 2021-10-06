typedef long long ll;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        map<int, int> mp;
        
        for(auto num : nums)
            mp[num]++;
        
        nums.clear();
        
        for(auto [k, v] : mp){
            for(int i=0; i<v && i<4; i++)
                nums.push_back(k);
        }
        
        vector<vector<int>> ans;
        
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<i; j++){
                set<ll> s;
                for(int k=0; k<j; k++){
                    if(s.find((ll)target - (ll)nums[i] - (ll)nums[j] - (ll)nums[k]) != s.end()){
                        vector<int> res;
                        res.push_back(target - nums[i] - nums[j] - nums[k]);
                        res.push_back(nums[k]);
                        res.push_back(nums[j]);
                        res.push_back(nums[i]);
                        ans.push_back(res);
                    }
                    s.insert(nums[k]);
                }
            }
        }
        
        set<vector<int>> dup;
        for(auto v : ans){
            sort(v.begin(), v.end());
            dup.insert(v);
        }
        
        ans.clear();
        
        for(auto v : dup)
            ans.push_back(v);
        
        return ans;
    }
};