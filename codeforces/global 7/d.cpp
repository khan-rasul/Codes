/*
* I'm a Ghost
* Now you see me, now you don't
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf ((ll)1e18)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
string s;
string give(ll i , ll j)
{
	string res = "";
	for(ll x = i ; x < j ; x++ )
	{
		ll l = i , r = x;
		string ls = "" , part = "";
		ll flag = 1;
		while(l < r)
		{
			if(s[l] != s[r]) { flag = 0 ; break;}
			l++;
			r--;
		}
		if(flag)
		{
			for(ll m = i ; m <= x ; m++ )
				ls += s[m];
		}
		if(res.length() < ls.length() )
			res = ls;
	}
	for(ll x = i + 1 ; x <= j ; x++ )
	{
		ll l = x , r = j;
		string ls = "" , part = "";
		ll flag = 1;
		while(l < r)
		{
			if(s[l] != s[r]) { flag = 0; break;}
			l++;
			r--;
		}
		if(flag)
		{
			for(ll m = x ; m <= j ; m++ )
				ls += s[m];
		}
		if(res.length() < ls.length() )
			res = ls;
	}
	return res;
}
int main()
{
    // fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	cin>>s;
    	ll l = 0 , r = s.length() - 1;
    	string ls = "" , part = "";
    	while(l < r)
    	{
    		if(s[l] != s[r]) break;
    		ls += s[l];
    		l++;
    		r--;
    	}
    	if(l == r) part = s[l];
    	else
    	part = give(l , r);
    	string rs = ls;
    	reverse(rs.begin() , rs.end());
    	cout<<ls + part + rs<<endl;

    }
}
