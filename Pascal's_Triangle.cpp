// Problem Link: https://leetcode.com/problems/pascals-triangle/
// Solution by Sameer Aggrawal (Github id- sameer-19)
class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n==1) return {{1}};
        if(n==2) return {{1},{1,1}};
        vector<vector<int>> v;
        v.push_back({1});
        v.push_back({1,1});
        for(int i=2;i<=n-1;i++)
        {
            vector<int> c;
            c.push_back(1);
            for(int j=0;j<(i-1);j++)
            {
                c.push_back(v[i-1][j]+v[i-1][j+1]);
            }
            c.push_back(1);
            v.push_back(c);
        }
        return v;
    }
};
