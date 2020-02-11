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
vector<ll> vis;
vector< vector<ll> > adj; 
vector<ll> cur, fin;
set<pair<ll,ll> > edges;
pair<ll,ll> dfs(ll u)
{
	pair<ll,ll> ans = {0 , u};
	vis[u] = 1;
	for(ll x : adj[u])
	{
		if(vis[x] == 0 && !(edges.count({x,u}) || edges.count({u,x}) ) )
			ans = max(ans , dfs(x) );
	} 
	ans.ff++;
	return ans;
}
void path(ll u , ll v)
{
	if(u == v)
	{
		fin = cur;
		return;
	}
	vis[u] = 1;
	for(ll x : adj[u])
	{
		if(vis[x] == 0)
		{
			cur.pb(x);
			path(x , v);
			cur.pop_back();
		}
	}
}
int main()
{
    //fast();
    ll n;
    cin>>n;
    vis.assign(n + 1, 0);
    adj.resize(n + 1);
    for(ll i = 1 ; i < n ; i++)
    {
    	ll x, y;
    	cin>>x>>y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    }
    pair<ll,ll> u1 = dfs(1);
    vis.assign(n + 1, 0);
    pair<ll,ll> u2 = dfs(u1.ss);
    vis.assign(n + 1, 0);
    path(u1.ss , u2.ss);
    ll x = u1.ss;
    for(ll i = 0 ; i < fin.size() ; i++ )   
	{
		edges.insert({x , fin[i]});
		x = fin[i];
	}
	fin.pb(u1.ss);
    vis.assign(n + 1, 0);
	pair<ll,ll> ans = {0 , 0};
	for(ll i = 0 ; i < fin.size() ; i++)
	{
		pair<ll,ll> temp = dfs(fin[i]);
		if(!(temp.ss == u1.ss || temp.ss == u2.ss))
		{
			ans = max(ans, temp);
		}
	}
	cout<<ans.ff - 1 + u2.ff - 1<<endl;
	cout<<ans.ss<<" "<<u1.ss<<" "<<u2.ss<<endl;
}
