// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string s){
        string ans = "";
        if (s.length() == 1) (s[0] == 'I') ? ans = "12" : ans = "21";
        else {
            int currMax = 0;
            int lastEntry = 0;
            int c;
            for ( int i = 0; i<s.length(); i++ ){
                int d = 0;
                if ( s[i] == 'I' ) {
                    c = i+1;
                    while (s[c] == 'D' && c<s.length()){
                        d++;
                        c++;
                    }
                    if ( i == 0 ){
                        currMax = d + 2;
                        ans += to_string(++lastEntry);
                        ans += to_string(currMax);
                        lastEntry = currMax;
                    } else {
                        currMax += d + 1;
                        ans += to_string(currMax);
                        lastEntry = currMax;
                    }
                    for ( int k = 0; k<d; k++) {
                        ans += to_string(--lastEntry);
                        i++;
                    }
                    
                   
                } else {
                    if ( i == 0 ) {
                        c = i+1;
                        while (s[c] == 'D' && c<s.length()){
                            d++;
                            c++;
                        }
                        currMax = d + 2;
                        
                        ans += to_string(currMax) + to_string(currMax - 1);
                        lastEntry = currMax - 1;
                    } else {
                        ans += to_string(--lastEntry);
                    }    
                }
                
            }    
        }
        
        return ans;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends