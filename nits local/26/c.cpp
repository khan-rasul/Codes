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
    ll n;
    cin>>n;
    vector<pair<ll, pair<ll,ll> > > arr(n);
    map<ll,ll> foo;
    for(ll i = 0 ; i < n ; i++ )
    {
    	cin>>arr[i].ss.ff>>arr[i].ss.ss>>arr[i].ff;
    	foo[arr[i].ss.ff]++;
    	foo[arr[i].ss.ss]++;
    }
    ll flag = 0;
    vector<ll> bar;
    for(auto x : foo)
    {
    	if(x.ss >= n / 2)
    		{flag = 1; bar.pb(x.ff);}
    }
    if(flag == 0)
    {
    	cout<<"-1\n";
    	return 0;
    }
    sort(arr.begin() , arr.end());
    // for(ll i = 0 ; i < n ; i++ )
    // {
    // 	cout<<arr[i].ss.ff<<" "<<arr[i].ss.ss<<" "<<arr[i].ff<<endl;
    // }
    ll ans = inf;
    for(ll i = 0 ; i < bar.size() ; i++)
    {
    	cerr<<bar[i]<<" ";
    	ll cnt = 0;
    	for(ll j = 0 ; j < n ; j++ )
    	{
    		if(arr[j].ss.ff == bar[i]) cnt++;
    	}

    	cnt = n / 2 - cnt;
    	cerr<<cnt<<endl;
    	ll cost = 0;
    	for(ll j = 0 ; j < n && cnt != 0; j++)
    	{
    		// cout<<cnt<<" ";
    		if(cnt < 0)
    		{
    			if(arr[j].ss.ff == bar[i])
    				{cost += arr[j].ff; cnt++;}
    		}
    		else
    		{
    			if(arr[j].ss.ss == bar[i])
    				{cost += arr[j].ff; cnt--;}
    		}
    	}
    	ans = min(ans , cost);
    }
    cout<<ans<<endl;
}
