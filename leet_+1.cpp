#include<bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
        int carry = 0, val = 0;
        vector <int> ans;
        for(int i = digits.size()-1; i>=0; i--)
        {
            val = digits[i] + carry;
            ans.push_back(val % 10);
            carry = val / 10;
        }
        while(carry != 0)
        {
            ans.push_back(carry % 10);
            carry = carry / 10;
        }
        std::reverse(ans.begin(),ans.end());
        return ans;
    }

int main()
{
	int d;
	cout << "enter digits ";
	cin >> d;
	
