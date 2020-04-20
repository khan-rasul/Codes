/*
* I'm a Ghost
* Now you see me, now you don't
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll int
#define mod 1000000007
#define inf ((ll)1e18)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
vector<vector<ll> > adj;
vector<ll> p , lev , tin , tout; 
ll ti = 0;
void dfs(ll u , ll v = -1 , ll l = 0)
{
	p[u] = v;
	lev[u] = l;
	tin[u] = ti++;
	for(ll x : adj[u])
	{
		if(x != v)
		{
			dfs(x , u , l + 1);
		}
	} 
	tout[u] = ti++;
}
bool anc(ll u , ll v)
{
	return (u == -1) || (tin[u] < tin[v] && tout[v] < tout[u] );
}
int main()
{
    // fast();
    ll n , m;
    cin>>n>>m;
    adj.resize(n + 1);
    p.resize(n + 1);
    lev.resize(n + 1);
    tin.resize(n + 1);
    tout.resize(n + 1);
    for(ll i = 1 ; i < n ; i++ )
    {
    	ll u , v;
    	cin>>u>>v;
    	adj[u].pb(v);
    	adj[v].pb(u);
    }

    dfs(1);
    while(m--)
    {
    	ll k;
    	cin>>k;
    	ll arr[k], flag = 1;
    	ll deep = 1;
    	for(ll i = 0 ; i < k ; i++)
    	{
    		cin>>arr[i];
    		deep = (lev[deep] <= lev[arr[i]] ? arr[i] : deep);
    		arr[i] = p[arr[i]];
    	}
    	for(ll i = 0 ; i < k ; i++)
    	{
    		if(!anc(arr[i] , deep))
    		{
    			flag = 0;
    			break;
    		}
    	}
    	cout<<(flag ? "YES" : "NO")<<endl;
    }
}
