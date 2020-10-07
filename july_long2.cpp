#include<bits/stdc++.h>
using namespace std;

int val(long long int a)
{
	int ans = 0;
	while(a != 0){
		int r = a % 10;
		a = a / 10;
		ans += r;
	}
	return ans;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	for(;t>=1;t--)
	{
		int n,chef=0,mont=0;
		cin >> n;
		long long int a,b;
		
		for(int i = 0; i < n; i++)
		{
			cin >> a >> b;
			int val1 = val(a);
			int val2 = val(b);
			if(val1 > val2)
				chef += 1;
			else if(val1 < val2)
				mont += 1;
			else
				{chef+=1;mont+=1;}
		}
		if(chef > mont)cout << 0 << " " << chef;
		else if(mont > chef)cout << 1 << " " << mont;
		else	cout << 2 << " " << chef;
		cout << endl;	
	}
	return 0;
}
