#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k = 1, c = 1;
	while(c < 25)
	{
		cout << int(k) << " ";
		k *= 5;
		c += 1;
	}
	return 0;
}
