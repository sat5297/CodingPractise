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
		long long int k, n;
		cin >> n >> k;
		long long int pos1 = 0, pos2 = 0;
		
		pos1 = n/9;
		if(n % 9 != 0)
			pos1 += 1;
		
		pos2 = k/9;
		if(k % 9 != 0)
			pos2 += 1;
		
		if(pos1 >= pos2)
			cout << 1 <<" " << pos2 << endl;
		else
			cout << 0 << " " << pos1 << endl;
	}
	return 0;
}
