class Solution {
public:
    int gcd(int a, int b){
        if(b==0) return a;
        else return gcd(b, a%b);
    }
    int findGCD(vector<int>& nums) {
        int min = *min_element(nums.begin(),nums.end());
        int max = *max_element(nums.begin(),nums.end());
        return gcd(max,min);
    }
};