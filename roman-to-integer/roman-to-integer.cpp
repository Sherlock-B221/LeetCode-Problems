class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char, int> mp;
        
        mp['I'] = 1;     //there are other ways to do this, but i think this one will make better readability else its your choice
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int sum = 0;      // we will store our ans in this variable
        
        for(int i = 0; s[i]!='\0'; i++){     // it will help us to traverse the string.
            
            if(mp[s[i]] < mp[s[i+1]]){
                sum += mp[s[i+1]] - mp[s[i]];
                i++;
            } else 
                sum += mp[s[i]];
        }
        
        return sum;    //our final ans...
    }
};