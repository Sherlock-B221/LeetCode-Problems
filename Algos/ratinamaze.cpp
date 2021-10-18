#include <iostream>
#include <cmath>
#include <climits>
#include <string>
using namespace std;
int sol[10][10] = {0};
bool ratinmaze(char maze[][5], int i, int j, int n, int m)
{
	//base case
	if (i == n - 1 and j == m - 1)
	{
		sol[i][j] = 1;//ye isliye taaki end me destination pe bhi one aaye
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << sol[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return true;//yahan pe agar false return kiya toh saare possible paths aa jayenge cause we are fooling the compiler
	}

	//recursive case
	sol[i][j] = 1; //path store karre hai

	//right se raasta dekh kar aa
	if (j + 1 < m && maze[i][j + 1] != 'X')
	{
		bool uparrasta = ratinmaze(maze, i, j + 1, n, m);

		if (uparrasta == true)
		{
			return true;
		}
		//yahan false return nahin kar sakte kyunki there is a possiblity ki neeche se raasta mil jaaye
	}
	//neeche se rasta check karke aa vaihhh
	if (i + 1 < n && maze[i + 1][j] != 'X')
	{
		bool neecherasta = ratinmaze(maze, i + 1, j, n, m);
		if (neecherasta == true)
		{
			return true;
		}
	}

	sol[i][j] = 0;//backtracking hai
	return false;
}
int main()
{
	char maze[][5] = {
	    {"0000"},
	    {"00XX"},
	    {"0000"},
	    {"XX00"}};
	int n = 4, m = 4;
	ratinmaze(maze, 0, 0, n, m);
}
