class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x<4) return 1;
        
        int r = x;
        int l = 0;
        long long int mid;
        while(l<=r)
        {
            mid = r - (r-l)/2;
            if((r+l)%2!=0 && l == r-1) return l;
            if(mid*mid>x)        
                r = mid;
            else if(mid*mid<x)
                l = mid;
            
            else if(mid*mid==x)
                return mid;  
        }       
        return mid;
    }
};