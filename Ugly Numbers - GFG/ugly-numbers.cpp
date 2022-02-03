// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/

	ull getNthUglyNo(ull n) {
        vector<ull> ugly(n);
        ugly[0] = 1;
        ull i2 = 0,i3 = 0, i5 =  0;
        ull n2 = ugly[i2]*2;
        ull n3 = ugly[i3]*3;
        ull n5 = ugly[i5]*5;
        ull next;
        for ( ull i = 1; i<n; i++ ) {
            next = min(n2,min(n3,n5));
            ugly[i] = next;
            
            if ( next == n2 ) {
                i2 += 1;
                n2 = ugly[i2]*2;
            } 
            if ( next == n3 ) {
                i3 += 1;
                n3 = ugly[i3]*3;
            }
            if ( next == n5 ) {
                i5 += 1;
                n5 = ugly[i5]*5;
            }
        }
        
        return next;
        
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends