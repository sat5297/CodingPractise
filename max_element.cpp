#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	for(;t>=1;t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
		    cin >> arr[i];
		int maxDiff = INT_MIN, mintillnow = arr[0], j = 0;
		for(int i = 1; i < n; i++)
	    {
	       // cout << maxDiff << " " << mintillnow << endl;
	        maxDiff = max(maxDiff, j-i);
	        if(arr[i] < mintillnow){
			      mintillnow = min(mintillnow, arr[i]);
			      j = i;
	        }
	    }
		cout << maxDiff << endl;
	}
return 0;
}
