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
    ll n , k;
    cin>>n>>k;
    map<ll,ll> bar;
    vector<pair<ll,ll>> foo;
    for(ll i = 0 ; i < n ; i++)
    {
    	ll x;
    	cin>>x;
    	bar[x]++;
    }
    for(pair<ll,ll> x : bar)
    	foo.pb(x);
    n = foo.size();
    ll pref[n + 1][2] , suff[n + 1][2];
    pref[0][0] = 0;
    pref[0][1] = foo[0].ss;
    for(ll i = 1 ; i < n ; i++)
    {
    	pref[i][0] = pref[i - 1][0] + pref[i - 1][1] * (foo[i].ff - foo[i - 1].ff);
    	pref[i][1] = pref[i - 1][1] + foo[i].ss;
    }
    suff[n - 1][0] = 0;
    suff[n - 1][1] = foo[n - 1].ss;
    for(ll i = n - 2 ; i >= 0 ; i-- )
    {
    	suff[i][0] = suff[i + 1][0] + suff[i + 1][1] * (foo[i + 1].ff - foo[i].ff);
    	suff[i][1] = suff[i + 1][1] + foo[i].ss;
    }
    ll ans = inf;
    for(ll i = 0 ; i < n ; i++ )
    {
    	ll left[2] = {0}, right[2] = {0};
    	if(i)
    	{
    		left[0] = pref[i - 1][0] + pref[i - 1][1] * (foo[i].ff - foo[i - 1].ff - 1);
    		left[1] = pref[i - 1][1];
    	}
    	if(i < n - 1)
    	{
    		right[0] = suff[i + 1][0] + suff[i + 1][1] * (foo[i + 1].ff - foo[i].ff - 1);
    		right[1] = suff[i + 1][1];
    	}
    	ll cost = 0 , t = k - min(foo[i].ss , k);
    	
		if(t)
		cost = min(t , left[1]) + left[0];
		t -= min(t , left[1]);
		if(t)
		cost += t + right[0];
    	ans = min(ans , cost);
    	cost = 0 ; t = k - min(foo[i].ss , k);
		if(t)
		cost = min(t , right[1]) + right[0];
		t -= min(t , right[1]);
		if(t)
		cost += t + left[0];
    	ans = min(ans , cost);
    }
    cout<<ans<<endl;
}
