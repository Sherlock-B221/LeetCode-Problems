class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> directions = {{-1,0},{0,1},{1,0},{0,-1}};
        int count = 0, row, col;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    count++;
                    grid[i][j] = 0;
                    queue<pair<int, int>> q;
                    q.push(make_pair(i, j));
                    while(q.size()){
                        row = q.front().first;
                        col = q.front().second;
                        q.pop();
                        for(int k=0; k<directions.size(); k++){
                            int newRow = row + directions[k][0];
                            int newCol = col + directions[k][1];
                            if(newRow<0||newCol<0||newRow>=grid.size()||newCol>=grid[0].size())
                                continue;
                            if(grid[newRow][newCol] == '1'){
                                grid[newRow][newCol] = '0';
                                q.push(make_pair(newRow,newCol));
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};