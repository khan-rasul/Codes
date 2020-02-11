/*
* Look in my eyes, what do you see?
* The cult of personality
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
vector<ll> vis;
vector< vector<ll> > adj; 
pair<ll,ll> dfs(ll u, ll mask)
{
	pair<ll,ll> ans = {0 , u};
	vis[u] = 1;
	for(ll x : adj[u])
	{
		if(vis[x] == 0 && (mask & (1<<x)) )
			ans = max(ans , dfs(x, mask) );
	} 
	ans.ff++;
	return ans;
}
int main()
{
    // fast();
    cin>>n;
    adj.resize(n + 2);
    for(ll i = 1 ; i < n ; i++ )
    {
    	ll x , y;
    	cin>>x>>y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    }
    for(ll i = 1 ; i < (1<< n) ; i++ )
    {
    	for(ll j = 0 ; j < n ; j++ )
    	{
    		if(i & (1<<j))
    		{
    			if(vis[j + 1] == 0)
    			{
    				pair<ll,ll> a = dfs(j + 1 , i);
    				a = dfs(a.ss , i);
    			}
    		}
    	}
    }
}
