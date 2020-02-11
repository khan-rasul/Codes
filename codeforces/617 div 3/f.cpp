/*
* All my senses intensify
* Whenever you and I, we dive
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
ll n;
vector< vector<ll> > adj;
ll edge[5005][5005]; 
vector<ll> vis;
ll flag = 1 ;
void dfs(ll a ,ll b ,ll g)
{
	if(a == b)
	{
		flag = 0;
		return;
	}
	vis[a] = 1;
	for(ll x : adj[a])
	{
		if(vis[x] == 0)
		{	
			if(flag == 0) return;
			if(edge[x][a] > g)
			{
				dfs(x , b , g);
			}
			else
			{
				ll temp = edge[x][a];
				edge[x][a] = g;
				edge[a][x] = g;
				dfs(x , b , g);
				if(flag == 0) return;
				edge[x][a] = temp;
				edge[a][x] = temp;
			}
		}
	}
} 
bool check(ll a , ll b , ll g , bool k)
{
	if(a == b)
	{
		return k;
	}
	vis[a] = 1;
	bool ans = false;
	for(ll x : adj[a])
	{
		if(vis[x] == 0)
		{
			if(edge[x][a] > g)
				ans |= check(x , b , g , k | false);
			else if(edge[a][x] == g)
				ans |= check(x , b , g , k | true);
		}
	}
	return ans;
}
int main()
{
    // fast();
    cin>>n;
    adj.resize(n + 1);
    memset(edge , -1 , sizeof edge);
    vector<pair<ll,ll>> ans;
    for(ll i = 1 ; i < n ; i++ )
    {
    	ll x , y;
    	cin>>x>>y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    	// edge.insert({ord(x , y) , -1 });
    	ans.pb({x , y});
    }
    vector<pair<pair<ll,ll>,ll>> quer;
    ll m;
    cin>>m;
    while(m--)
    {
    	ll a , b , g;
    	cin>>a>>b>>g;
    	quer.pb({{a,b} , g});
    	flag = 1 ;
    	vis.assign(n + 1 , 0);
    	dfs(a , b , g);
    }
    for(ll i = 0 ; i < quer.size() ; i++ )
    {
    	vis.assign(n + 1 , 0);
    	if(!check(quer[i].ff.ff , quer[i].ff.ss , quer[i].ss , false))
    	{
    		cout<<"-1\n";
    		return 0;
    	}
    }
    for(auto x : ans)
    {
    	if(edge[x.ff][x.ss] == -1)
    		cout<<1000000<<" ";
    	else
    		cout<<edge[x.ff][x.ss]<<" ";
    }
}
