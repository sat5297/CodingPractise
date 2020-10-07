#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	for(;t>=1;t--)
	{
		int n;
		cin >> n;
		int arr1[n] = {0};
		int arr2[n] = {0};
		for(int i = 0; i < n; i++)
			cin >> arr1[i];
		for(int i = 0; i < n; i++)
			cin >> arr2[i];
		
		sort(arr1,arr1+n);
		sort(arr2,arr2+n);
		
		int i = 1, j = 0, ans = 0, res = 0;
		
		while(i < n && j < n)
		{
			if(arr1[i] < arr2[j])
			{
				i++; ans += 1;
			}
			else{
				j++;ans -= 1;
			}
			res = max(res,ans);
		}
		cout << res << endl;
	}
return 0;
}
