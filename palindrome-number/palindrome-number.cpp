class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        
        long int reversedNum = 0;
        int originalNum = x;
        while(x!=0)
        {
            int temp=x%10;
            x/=10;
            reversedNum = reversedNum*10 + temp;
        }
       
        if(reversedNum == originalNum)
            return true;
        return false;
    }
};