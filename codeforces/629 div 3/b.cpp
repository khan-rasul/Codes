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
ll comb(ll n , ll x)
{
	if(x == 2)
		return n * (n - 1) / 2;
	return n;
}
int main()
{
    // fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n , k;
    	cin>>n>>k;
    	string s = "";
    	ll x = 2;
    	ll m = n;
    	while(x)
    	{
    		cerr<<comb(n - 1, x)<<" "<<k<<endl;
    		if(comb(n - 1, x) < k)
    		{
    			s += "b";
    			
    			k -= comb(n - 1, x);
    			x--;
    		}
    		else
    		{
    			s+= "a";
    		}
    		n--;
    	}
    	for(ll i = s.length() ; i < m ; i++)
    		s += "a";
    	cout<<s<<endl;
    }
}
