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
		string s;
		cin >> s;
		
		vector < char > v;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == 'a')
				v.push_back(s[i]);
			else if(s[i] == 'e')
				v.push_back(s[i]);
			else if(s[i] == 'i')
				v.push_back(s[i]);
			else if(s[i] == 'o')
				v.push_back(s[i]);
			else if(s[i] == 'u')
				v.push_back(s[i]);
		}
		unordered_set <char> s;
		for(auto it = v.begin(); it != v.end(); ++it)
		{
			if(*it == 'a')
				s.insert(*it);
			else if(*it == 'e' && (s.find(*it) == s.end()))
				
		
		}

	}
	return 0;
}
