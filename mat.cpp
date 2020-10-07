#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int mat[n][n];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cin >> mat[i][j];
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cout <<  mat[i][j] << " ";
		cout << endl;
	}
	vector  <int> v1;
	for(int c = 0; c <= 2*n-2; c++)
	{
		for(int i = 0; i < n; i++)
		{
		for(int j = 0; j < n; j++)
			{
				int v = i + j;
				if(v == c)
					v1.push_back(mat[j][i]);
				if(v > c)break;
			}
		}
	}
	for(auto it = v1.begin(); it != v1.end(); ++it)
		cout << *it << " "; 
return 0;
}
