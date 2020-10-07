#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for(;t>=1;t--)
	{
		int n, f = 0;
		cin >> n;
		n-=1;
		char arr[8][8];
		for(int i = 0; i < 8; i++)
		{
			for(int j = 0; j < 8; j++)
			{
				if(i == 0 && j == 0 && f == 0){
					arr[i][j] = 'O'; f = 1;}
				else if(n > 0 && f == 1){
					arr[i][j] = '.'; n-=1;}
				else 	
					arr[i][j] = 'X';
			}
		}
		for(int i = 0; i < 8; i++)
		{
			for(int j = 0; j < 8; j++)
				cout << arr[i][j];
			cout << endl;
		}
		//cout << endl;
	}
	return 0;
}
