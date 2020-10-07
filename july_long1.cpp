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
		cin >> n;
		vector <int> v(n,0);
		for(int i = 0; i < n; i++)
			cin >> v[i];
		long long int ans = 0;
		//cout << endl;
		for(int i = 1; i < n; i++){
			ans += abs(v[i] - v[i-1])-1;
			//cout << ans << " " ;
			}
		cout << ans << endl;
	}
	return 0;
}
