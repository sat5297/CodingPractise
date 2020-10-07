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
		int p,h;
		cin >> h >> p;
		
		while(true)
		{
			h -= p;
				if(h <= 0){
					cout << 1 << endl;
					break;
					}
			p = p/2;
			if(p == 0){
					cout << 0 << endl;
				break;
				}
		}
	}
	return 0;
}
