// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        int n = nums.size();
        unordered_map<int,int> m;
        vector<int> vis(n,0);
        if ( n%2 != 0 ) return false;
        
        for ( int i = 0; i<n; i++ ) {
            int rem = nums[i]%k;
            m[rem]++;
        }
        
        for ( int i = 0; i<n; i++) {
            int curRem = nums[i]%k;
            int reqRem = k - curRem;
            if ( curRem*2 == k ){
                if (m[reqRem] %2 != 0 ) {
                    return false;
                }
            }
            else if (curRem == 0){
                 if (m[reqRem] &1) return false;
            }
            else if ( m[reqRem] != m[curRem] ) {
                return false;
            }
            
        }
        
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends