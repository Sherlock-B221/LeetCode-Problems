class Solution {
public:
    bool isValid(string s) {
        if ( s.length() == 0 ) return true;
        stack<char> stack;
        for ( int i = 0; i< s.length(); i++) {
            if (s[i] == '[' || s[i] == '{' || s[i] == '(') {
                stack.push(s[i]);
                
            } else {
                if ( stack.empty() ) return false;
                char c = stack.top();
                // cout<<c<<endl;
                stack.pop();
                if ( (s[i] == ')' && c != '(' ) || ( s[i] == ']' && c != '[') || ( s[i] == '}' && c != '{') ) return false; 
                
            }
        }
        
        return stack.empty() ? true : false;
    }
};