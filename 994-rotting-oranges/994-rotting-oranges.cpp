class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<pair<int,int>> directions = { {-1,0},{0,1},{1,0},{0,-1} };
        queue<pair<int,int>> rotten;
        int totalRows = grid.size();
        int totalCols = grid[0].size();
        int freshCount = 0;
        for ( int i = 0; i<totalRows; i++ ) {
            for ( int j = 0; j<totalCols; j++) {
                if ( grid[i][j] == 1 )
                    freshCount++;
                if ( grid[i][j] == 2 )
                    rotten.push({i,j});
            }
        }
        if ( freshCount == 0 ) return 0;
        int time = 0;
        int l = rotten.size();
        while ( rotten.size() > 0 ) {
            if ( l == 0) {
                time++;
                l = rotten.size();
            }
            int r = rotten.front().first;
            int c = rotten.front().second;
            rotten.pop();
            l--;
            for ( int i = 0; i<directions.size(); i++ ) {
                int row = r + directions[i].first;
                int col = c + directions[i].second;
                if(row<0||col<0||row>=grid.size()||col>=grid[0].size())
                    continue;
                if(grid[row][col] == 1){
                    grid[row][col] = 2;
                    freshCount--;
                    rotten.push({row,col});
                }
            }
        }
        if (freshCount != 0 ) return -1;
        return time;
    }
        
};