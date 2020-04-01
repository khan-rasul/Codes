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
    ll n , m , k;
    cin>>n>>m>>k;
    vector<ll> a(n) , b(m);
    for(ll i = 0 ; i < n ; i++ )
    	cin>>a[i];
    for(ll j = 0 ; j < m ; j++ )
    	cin>>b[j];
    a.pb(0); b.pb(0);
    ll ans = 0;
    ll row[n + 5] = {0} , col[m + 5] = {0};
    ll c = 0;
	for(ll i = 0 ; i <= n ; i++ )
	{
		if(a[i] == 0)
		{
			for(ll j = 1 ; j <= c ; j++ )
				row[j] += c - j + 1;
			c = 0;
		}
		else
			c++;
	} 
	c = 0;
	for(ll i = 0 ; i <= m ; i++ )
	{
		if(b[i] == 0)
		{
			for(ll j = 1 ; j <= c ; j++ )
				col[j] += c - j + 1;
			c = 0;
		}
		else
			c++;
	}
    for(ll i = 1 ; i * i <= k ; i++ )
    {
    	if(k % i == 0)
    	{
    		if(i <= n && (k / i) <= m)
    			ans += row[i] * col[k / i];
    		if(i != (k / i) && (i <= m && (k / i) <= n))
    			ans += row[k / i] * col[i];
    	}
    }
    
    cout<<ans<<endl;
}
