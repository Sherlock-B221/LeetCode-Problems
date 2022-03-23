class Solution {
public:
    string removeKdigits(string num, int k) {
        //pehle samjh le read karke...zada monitor pe mat dekh
        int n=num.length();
        if(n<k) return "0";
        if(k==0) return num;
        
        stack<char> s;
        string res="";
        s.push(num[0]);
        
        for(int i=1;i<n;i++){
            while(!s.empty()&&k>0&&num[i]<s.top()){
                --k;
                s.pop();
            }
            s.push(num[i]);
            if(s.size()==1&&num[i]=='0') s.pop();
            
        }
        
        while(k--&&!s.empty()){
            s.pop();
        }
        
        while(!s.empty()){
            res+=s.top();
            s.pop();
        }
        
        if(!res.length()) return "0";
        
        reverse(res.begin(),res.end());
        return res;
        
    }
};