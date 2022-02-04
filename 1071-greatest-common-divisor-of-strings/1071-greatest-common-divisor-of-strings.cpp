class Solution {
public:
    int gcd(int a, int b){
        if(b==0) return a;
        else return gcd(b, a%b);
    }
    
    string gcdOfStrings(string str1, string str2) {
        int l1 = str1.length();
        int l2 = str2.length();
        
        if ( l1<l2 ) return gcdOfStrings(str2,str1);
        
        if(str1+str2!=str2+str1) return "";

        int pos = gcd(l1, l2);

        return str1.substr(0,pos);
    }
};