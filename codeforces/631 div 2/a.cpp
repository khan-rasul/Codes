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
    	ll n , x;
    	cin>>n>>x;
    	set<ll> foo;
    	ll arr[n];
    	for(ll i = 0 ; i < n ; i++)
    	{
    		cin>>arr[i];
    	}
    	sort(arr , arr + n);
    	ll ans = 0;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		if(arr[i] <= ans) continue;
    		ll temp = ans;
    		ans += min(arr[i] - 1 - temp, x);
    		x -= min(arr[i] - 1 - temp, x);
    		if(arr[i] == ans + 1) ans++;
    	}
    	cout<<ans + x<<endl;
    }
}
