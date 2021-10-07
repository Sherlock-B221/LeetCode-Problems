#include "iostream"
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> directions = {{-1,0},{0,1},{1,0},{0,-1}};

void traversalDFS(int row, int col, vector<vector<int>> matrix, vector<vector<bool>> &seen, vector<int> &vis)
{
  if(row<0 || col<0 || row>=matrix.size() || col>=matrix[0].size() || seen[row][col])
    return;
  vis.push_back(matrix[row][col]);
  seen[row][col] = true;
  for (int i = 0; i < directions.size(); i++) {
    traversalDFS(row + directions[i][0], col+directions[i][1], matrix, seen, vis);
  }
}

int main()
{
  int row= 4, col = 4;
  vector<vector<int>> matrix {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
  };
  vector<vector<bool>> seen(row,vector<bool>(col,false));
  vector<int> vis;
  traversalDFS(0,0, matrix, seen, vis);
  for (auto i:vis) {
    cout<<i<<" ";
  }
}
