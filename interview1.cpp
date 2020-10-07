string Solution::multiply(string A, string B) {
    string ans = "";
    int i = 0;
    long long int carry = 0 ,sum = 0;
    std::reverse(A.begin(),A.end());
    std::reverse(B.begin(),B.end());
    vector < string > v;
    //cout << A.size() << " " << B.size() << endl; 
    int max_len = 0;
    for(int i = 0; i < A.size(); i++)
    {
        int a = (int(A[i])-48);
        for(int j = 0; j < B.size(); j++)
        {
            int b = (int(B[j])-48);
            sum = a * b + carry;
            ans += to_string(sum % 10);
            carry = sum/10;
            //cout << a << " "<< b<< " "<< sum << " " << carry << " " << ans << endl;
        }
        while(carry != 0)
        {
            ans += to_string(carry%10);
            carry /= 10;
        }
        v.push_back(ans);
        int k = i+1;
        int len = ans.size();
        max_len = max(max_len,len);
        ans = "";
        while(k--)
            ans += "0";
    }
    ans = "233";
    
    for(auto it = v.begin();it != v.end(); ++it)
    {
        ans = *it;
       // cout << ans << " "; 
        int len = ans.size();
        int k = max_len - len;
        while(k--)
            ans += "0";
        *it = ans;
        //cout << ans << " \n";
    }
    sum = 0, carry = 0;
    ans = "";
    A="";
    for(int i = 0; i < max_len; i++)
    {
        sum = 0;
        for(auto it = v.begin(); it != v.end(); ++it)
        {
            A = *it;
            sum = sum + (int(A[i])-48); 
        }
        sum += carry;
        ans += to_string(sum%10);
        carry = sum/10;
        //cout << sum << " " << ans << " " << carry << endl;
    }
    while(carry != 0)
    {
        ans += to_string(carry%10);
        carry /= 10;
    }
    int k = max_len;
    carry = 0;
    std::reverse(ans.begin(),ans.end());
    //cout << ans << endl;
    for(int i = 0; i < ans.size(); i++)
    {
        if(ans[i] == '0')
            carry+=1;
        else
            break;
    }
    if(carry == max_len)ans="0";
    else if(carry != 0)
        ans = ans.substr(carry,max_len);
    return ans;
}

