class Solution {
public:
    int strStr(string haystack, string needle) {
        int lenh=haystack.length();
        int lenn=needle.length();
        if (lenn==0) return 0;
        int ind=0,c=0,j=0;
        for(int i=0;i<lenh;i++){
            if(haystack[i]==needle[j]){
                j++;c++;
                if(c==lenn) {
                    return i-c+1;
                }  
            }else{
                i=i-c;
               c=0;j=0;
            }
        }
        return -1;
    }
};