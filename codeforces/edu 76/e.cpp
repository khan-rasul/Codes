/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf 1ll<<60
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    //fast();
    ll k[3];
    cin>>k[0]>>k[1]>>k[2];
    ll n = k[0] + k[1] + k[2];
    vector<set<ll>> a(3);
    for(ll j = 0 ; j < 3 ; j++ )
    {
    	for(ll i = 0 ; i < k[j] ; i++)
    	{
    		ll x;
    		cin>>x;
    		a[j].insert(x);
    	}
	}
    ll dp[n + 5] ;
    for(ll i = 0 ; i < n + 5 ; i++ ) 
    	dp[i] = inf;
    dp[1] = (a[0].count(1) == 0);
    for(ll i = 0 ; i < 3 ; i++ )
    {
    	dp[1] = min(dp[1] , (ll)(a[i].count(1) == 0));
    	for(ll j = 2 ; j <= n ; j++ )
    	{
    		dp[j] = min(dp[j] , dp[j - 1] + (a[i].count(j) == 0) );
    	}
    }
    cout<<dp[n]<<endl;

}
