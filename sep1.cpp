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
		long long int a,b,c,d,n,d1=0,d2=0,ans = 0;
		cin >> a >> b >> c >> d >> n;
		d1=c-a; d2=b-d;
		cout << a << " " << b << endl;
		cout << (a*b) << endl;
	}
	return 0;
}
