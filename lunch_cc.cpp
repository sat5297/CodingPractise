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
		int n,m,x,y;
		long long sum=0,row_sum1=0,row_sum2=0;
		long long int ans = 0;
		cin >> n >> m >> x >> y;
		int min = 0, max = 0;
		
		if(x > y)
		{
			min = y/2;
			max = y - min;
		}
		else if(x < y)
		{
			min = std::min(y-x,x);
			max = x;
		}
		else if(x == y)
		{
			min = 0;
			max = x;
		}
		sum = min + max;
		
		if(m % 2 == 0){
			row_sum1 = (m/2)*sum;
			row_sum2 = (m/2)*sum;
			}
		else{
			row_sum1 = (m/2)*sum + max;
	 		row_sum2 = (m/2)*sum + min;
	 	}	
	 	
	 	ans = (row_sum1 + row_sum2);
		
	//	cout << row_sum1 << " " << row_sum2 << " " << ans << " ";  
		
		if(n%2 == 0)
			ans = (ans * (n/2));
		else
			ans = (ans * (n/2)) + row_sum1;
		
		cout << ans << endl;
	}
return 0;
}
