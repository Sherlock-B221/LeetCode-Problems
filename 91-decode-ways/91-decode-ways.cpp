class Solution {
public:
    vector<int> dp;
    int numDecodings(string& s) {
        dp.resize(s.size()+1, -1);
        return fun(s,  0);
    }
    
    int fun(string& s, int i) {
        // Base 
        if(i >= s.size()-1) {
            if(i==s.size()-1 && s[i] == '0')
                return 0;
            return 1;
        }
        
        // memo
        if(dp[i] != -1)
            return dp[i];
        
        // rec 
//         scam comment
        
        char current = s[i], next = s[i+1];
        if(current == '0')
            return dp[i] = 0;       // as cant place 0 at first position for any alpha
        if(current == '1' || (current == '2' && next < '7'))
            return dp[i] = fun(s, i+1) + fun(s, i+2);      // treat as 1 digit code + as 2 digit code
        return dp[i] = fun(s, i+1);          // for code like 27, 38 cant treat as 2 digit so only add 1 digit case in ans
    }
};