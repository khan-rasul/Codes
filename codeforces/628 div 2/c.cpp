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
vector< vector<ll> > adj;
map< pair<ll,ll> , ll > edge;
vector<pair<ll,ll>> inp;
vector<ll> vis;
pair<ll,ll> order(ll x ,ll y)
{
	if(x > y) swap(x , y);
	return {x , y};
}
int main()
{
    //fast();
    ll n;
    cin>>n;
    adj.resize(n + 1);
    vis.resize(n + 1);
    for(ll i = 1 ; i < n ; i++ )
    {
    	ll x , y;
    	cin>>x>>y;
    	inp.pb({x , y});
    	edge.insert({ order(x , y) , - 1} );
    	adj[x].pb(y);
    	adj[y].pb(x);
    }
    ll u = 1;
    for(ll i = 2 ; i <= n ; i++)
    {
    	if(adj[u].size() < adj[i].size() )
    		u = i;
    }
    queue<ll> bfs;
    bfs.push(u);
    vis[u] = 1;
    ll c = 0;
    while( !bfs.empty() )
    {
    	ll v = bfs.front() ; bfs.pop();
    	for(ll x : adj[v])
    	{
    		if(vis[x] == 0)
    		{
    			vis[x] = 1;
    			bfs.push(x);
    			edge[order(x , v)] = c++;
    		}
    	}
    }
    for(ll i = 0 ; i < inp.size() ; i++ )
    {
    	cout<<edge[order(inp[i].ff , inp[i].ss)]<<endl;
    }

}
