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
vector<ll> vis;//[n + 1] = {0};
vector<vector<ll> > adj;
ll dfs(ll u , ll p = -1, ll dep = 1)
{

	vis[u] = 0;
	ll st = 1;
	for(ll x : adj[u])
	{
		if(x != p)
		st += dfs(x , u , dep + 1);
	}
	vis[u] = st - dep;
	return st;
}
int main()
{
	// fast();
    ll n , k;
    cin>>n>>k;
    adj.resize(n + 1);
    vis.resize(n + 1);
    for(ll i = 1 ; i < n ; i++ )
    {
    	ll x , y;
    	cin>>x>>y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    }
    k = n - k;
    dfs(1);
    sort(vis.begin() + 1 , vis.end());
    ll ans = 0;
    for(ll i = 0 ; i < k ; i++ )
    {
    	ans += (vis[n - i]);
    }
    cout<<ans<<endl;
}
