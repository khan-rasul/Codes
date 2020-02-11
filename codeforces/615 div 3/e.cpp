/*-----rk_98-----*/
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
    //fast();
    ll n , m;
    cin>>n>>m;
    ll arr[n][m];
    for(ll i = 0 ; i < n ; i++ )
    {
    	for(ll j = 0 ; j < m ; j++ )
    		cin>>arr[i][j];
    }
    ll foo[n];
    foo[0] = 1;
    for(ll i = 1 ; i < n ; i++)
    	foo[i] = foo[i - 1] + m;
    ll ans = 0;
    for(ll j = 0 ; j < m ; j++ )
    {
    	map<ll,ll> data;
    	ll cnt = n;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		ll x = foo[i] + j - arr[i][j]; 
    		if(x < 0)
    		{
    			x += m * n;
    			if(x == 0)
    			continue;
    		}
    		if(x >= 0 && x % m == 0)
    		{
    			data[x / m]++;
    		}
    	}
    	for(auto x : data)
    	{
    		cnt = min(cnt , x.ff + n - x.ss);
    	}
    	ans += cnt ;
    }
    cout<<ans<<endl;
}
