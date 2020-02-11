/*-----rk_98-----*/
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
vector< vector<ll> >adj;
ll vis[(ll)1e5 +10] ={0};
ll ma=0;
void dfs(ll u , ll c)
{
	vis[u] = 1;
	ma = max(ma , c); 
	if(adj[u].size()>=3) c =0;
	for(ll x : adj[u])
	{
		if( vis[x] == 0)
		{
			dfs(x , c+1);
		}
	}
}
int main()
{
    //fast();
    ll n ;
    cin>>n;
    adj.resize(n+2);
    for(ll i =0 ;i < n-1; i++)
    {
    	ll a,b;
    	cin>>a>>b;
    	adj[a].pb(b);
    	adj[b].pb(a);
    }
    ll i;
    for(i =1 ; i<=n ;i++)
    	if(adj[i].size() ==1 ) break;
    dfs(i, 0);
    if(ma >= 2) 
    {
    	cout<<"NO\n";
    }
    else
    	cout<<"YES\n";
}
