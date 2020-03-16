/*
* I'm a Ghost
* Now you see me, now you don't
* 	    ~wrt CF obviously~
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
ll n;
vector<vector<ll> > adj;
vector<ll> arr;
vector<ll> f , g ; 
ll dfs(ll v , ll pv)
{
	ll res = arr[v];
	for(ll x : adj[v])
	{
		if(x == pv) continue;
		res += max( 0ll , dfs(x , v) );
	}
	return f[v] = res;
}
void solve(ll v , ll pv)
{
	g[v] = f[v];
	for(ll x : adj[v])
	{
		if(x == pv) continue;
		f[v] -= max(0ll , f[x]);
		f[x] += max(0ll , f[v]);
		solve(x , v );
		f[x] -= max(0ll , f[v]);
		f[v] += max(0ll , f[x]);
	}
}
int main()
{
    // fast();
    cin>>n;
    adj.resize(n + 1);
    f.resize(n + 1);
    g.resize(n + 1);
    arr.resize(n + 1);

    for(ll i = 1 ; i <= n ; i++ )
    {
    	cin>>arr[i];
    	if(arr[i] == 0) arr[i]--;
    }
    for(ll i = 1 ; i < n ; i++)
    {
    	ll x , y;
    	cin>>x>>y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    }
    dfs(1 , 0);
    solve(1 , 0);
    for(ll i = 1 ; i <= n ; i++)
    	cout<<g[i]<<" ";
    cout<<endl;
}
