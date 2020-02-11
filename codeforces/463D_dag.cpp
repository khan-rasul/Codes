/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf (1ll<<60)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
vector<vector<ll> > adj;
vector<ll> memo;
ll dfs(ll u)
{
	ll ans = 0;
	if(memo[u] != -1) return memo[u];
	for(ll x : adj[u])
		ans = max( ans , dfs(x));
	return memo[u] = ans + 1;
} 
int main()
{
    //fast();
    ll n , k;
    cin>>n>>k;
    ll arr[k][n] , pos[k][n];
    adj.resize(n + 1);
    memo.resize(n + 1 , -1);
    for(ll i = 0 ; i < k ; i++)
    	for(ll j = 0 ; j < n ; j++ )
		{
			cin>>arr[i][j];
			pos[i][arr[i][j] - 1] = j;
		}
    for(ll i = 0 ; i < n ; i++ )
    {
    	for(ll j = 0 ; j < n ; j++ )
    	{
    		ll flag = 1;
    		for(ll l = 0 ; l < k ; l++ )
    			if(pos[l][i] >= pos[l][j])
    			{
    				flag = 0;
    				break;
    			}
    		if(flag)
    			adj[i].pb(j);
    	}
    }
    ll ans = 0;
    for(ll i = 0 ; i < n ; i++)
    	ans = max(ans , dfs(i));
    cout<<ans<<endl;

}