class Solution {
public:
    int fib(int n) {
        if ( n < 2 )
            return n;
        else
        {
            int a = 0, b = 1, sum;
            for (int i = 2; i < n; i++ ) {
                sum = a + b;
                a = b;
                b = sum;
            }
            return a+b;
            
        }
        
    }
};