// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> directions = {{-1,0},{0,1},{1,0},{0,-1}, {1,1}, {-1,-1}, {-1,1}, {1,-1}};
        int ans  = 0, r, c;
        
        for ( int i = 0; i<grid.size(); i++) {
            for (  int j = 0; j<grid[0].size(); j++){
                
                if ( grid[i][j] == '1' ) {
                    ans++;
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    grid[i][j] = '0';
                    while ( q.size() ) {
                        r = q.front().first;
                        c = q.front().second;
                        q.pop();
                        for (int k = 0; k<directions.size(); k++ ) {
                            int newR = r + directions[k][0];
                            int newC = c + directions[k][1];
                            
                            if ( newR >= grid.size() || newC >= grid[0].size() || newC < 0 || newR < 0)
                                continue;
                            if (grid[newR][newC] == '1' ) {
                                grid[newR][newC] = '0';
                                q.push({newR, newC });
                            }
                            
                        }
                    }
                }
            }
        }
        
        return ans;
        
       
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends