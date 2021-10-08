#include "iostream"
#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<vector<int>> directions = {{-1,0},{0,1},{1,0},{0,-1}};
  int row= 4, col = 4;
  vector<vector<int>> matrix {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
  };
  vector<vector<bool>> seen(row,vector<bool>(col,false));
  vector<int> vis;
  queue<pair<int, int>> q;
  int colCheck = 0;
  int rowCheck = 0;
  q.push(make_pair(rowCheck, colCheck));
  while(q.size()) {
    rowCheck = q.front().first;
    colCheck = q.front().second;
    q.pop();
    if(rowCheck<0 || colCheck<0 || rowCheck>=matrix.size() || colCheck>=matrix[0].size()
       || seen[rowCheck][colCheck]) {
      continue;
    }
    seen[rowCheck][colCheck] = true;
    vis.push_back(matrix[rowCheck][colCheck]);
    for (int i = 0; i < directions.size(); ++i) {
      q.push(make_pair(rowCheck + directions[i][0], colCheck + directions[i][1] ));
    }
  }
  for (auto i:vis) {
    cout<<i<<" ";
  }
  return 0;
}
