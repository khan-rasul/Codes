/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
vector<vector<ll> > adj;
vector<ll> vis,dp;
ll dfs(ll u)
{
	vis[u]=1;
	ll th =0;
	for(ll i=0;i<adj[u].size() ;i++)
	{
		if(vis [ adj[u][i] ] == 0 )
			th = max( dfs(adj[u][i]) + 1 , th );
		else
			dp[u] = max( dp [adj[u][i]] +1 ,dp[u]);

	}
	return dp[u] = max( th , dp[u] ) ;

}
int main()
{
    //fast();
    ll n,m;
    cin>>n>>m;
    adj.resize(n+2);
    dp.resize(n+2);
    vis.assign(n+2,0);
    for(ll i=0;i<m;i++)
    {
    	ll x, y;
    	cin>>x>>y;
    	adj[x].pb(y);
    }
    for(ll i=1;i<=n;i++)
    {
    	if(vis[i]==0)
    		dfs(i);
    }
    cout<< *max_element(dp.begin(), dp.end() )<<endl;
}
