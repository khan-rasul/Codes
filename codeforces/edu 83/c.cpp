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
int main()
{
    // fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n , k;
    	cin>>n>>k;
    	map<ll,ll> foo;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		ll x;
    		cin>>x;
    		ll v = 0;
    		while(x)
    		{
    			foo[v] += (x % k);
    			x /= k;
    			v++;
    		}
    	}
    	ll flag = 1;
    	for(auto x : foo)
    	{
    		if(x.ss > 1)
    		{
    			flag = 0 ;
    			break;
    		}
    	}
    	cout<<(flag ? "YES" : "NO")<<endl;
    }
}
