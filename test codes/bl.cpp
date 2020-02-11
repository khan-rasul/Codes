/*
* All my senses intensify
* Whenever you and I, we dive
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

// <binary_lifting>
const ll nax = 1000005;
const ll l = ceil( log2(nax) );
vector< vector<ll> > adj;
ll n; 
ll memo[nax][l];
vector<ll> tin , tout;
ll timer = 0;
void dfs(ll u , ll p)
{
	tin[u] = ++timer;
	memo[u][0] = p;
	for(ll i = 1 ; i <= l ; i++ )
	{
		memo[u][i] = memo[memo[u][i - 1]][i - 1];
	}
	for(ll x : adj[u])
	{
		if(x != p)
			dfs(x , u);
	}
	tout[u] = ++timer;
}
bool is_ancestor(ll u , ll v)
{
	return tin[u] <= tin[v] && tout[v] <= tout[u];
}
ll lca(ll u ,ll v)
{
	if(is_ancestor(u , v))
		return u;
	if(is_ancestor(v , u))
		return v;
	for(ll i = l ; i >= 0 ; i--)
	{
		if(!is_ancestor(memo[u][i] , v))
			u = memo[u][i];
	}
	return memo[u][0];
}
// </binary_lifting>

int main()
{
    // fast();
    cin>>n;
    adj.resize(n + 1);
    tin.resize(n + 1);
    tout.resize(n + 1);
    for(ll i = 1 ; i < n ; i++)
    {
    	ll x , y;
    	cin>>x>>y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    }
    ll arr[n + 1] = {0};
    dfs(1 , 1);
    ll q;
    cin>>q;
    while(q--)
    {
    	ll x , y , cost;
    	cin>>x>>y>>cost;
    	ll p = lca(x , y);
    	arr[p] += cost;
    	arr[x] += cost;
    	arr[y] += cost;
    }
    for(ll i = 1 ; i <= n ; i++ )
    	cout<<arr[i]<<" ";

}
