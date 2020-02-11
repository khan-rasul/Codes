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
vector<vector<ll> > adj;
ll n;
bool vis[(ll)1e5 + 5] = {0};
pair<ll,ll> dfs(ll u)
{
	vis[u] = 1;
	pair<ll,ll> ans = {1,1};
	for( ll i =0 ; i<adj[u].size() ; i++)
	{
		if(vis[adj[u][i]] == 0)
		{
			pair<ll,ll> temp = dfs( adj[u][i] );
			ans.ff *= (temp.ff+ temp.ss);
			ans.ss *=temp.ff;
			ans.ff %= mod;
			ans.ss %= mod;
		}
	}
	return ans;
}
int main()
{
    //fast();
    cin>>n;
    adj.resize(n+2);
    for( ll i=0 ;i< n-1 ; i++)
    {
    	ll a,b;
    	cin>>a>>b;
    	adj[a].pb(b);
    	adj[b].pb(a);
    }
    pair<ll,ll> ans =dfs(1);
    cout<<(ans.ff + ans.ss) % mod<<endl;
}
