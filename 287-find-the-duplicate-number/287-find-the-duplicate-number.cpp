class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for ( auto e : nums ) {
            if ( m[e] > 0 ) {
                return e;
            }
            m[e]++;
        }
        return 0;
    }
};