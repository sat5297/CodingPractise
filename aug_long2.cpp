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
		int n;
		long long int k, z;
		cin >> n >> k;
		long long int ans = INT_MAX, pos = -1, val = 0;
		for(int i = 0; i < n ;i++)
		{
			cin >> z;
			if(k % z == 0)
			{
				  val = k/z;
				  if(val < ans)
					{
						ans = val;
						pos = z;
					}	
			}
		}
		cout << pos << endl;
	}
	return 0;
}
