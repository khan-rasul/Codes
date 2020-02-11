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
ll n;
vector< vector<ll> > adj;
vector<ll> arr ;
ll  vis[100005];
bool dfs(ll u , ll p) 
{
	vis[u] = 1;
	// cout<<" ( "<<u<<" , " << p << " ) \n";
	if(adj[u].size() == 1 && vis[adj[u][0]] )
	{
		// cout<<" return\n";
		return true;
	}
	
	bool ans = true;
	ll temp;
	for(ll x : adj[u])
	{
		if(vis[x] == 0)
			{ans &= dfs(x , p); temp = x;}
	}
	if(u == p)
		return ans;
	// cout<<"( "<<u<<" , " << p << " ) ";
	// cout << ((ans && (arr[u] == arr[temp])) ? 1 : 0) << endl;
	return ans && (arr[u] == arr[temp]) ;
}
int main()
{
    //fast();
    cin>>n;
    adj.resize(n + 2);
    arr.resize(n + 2);
    //memset(vis , 0 , sizeof vis);
    vector<pair<ll,ll>> edge;
    for(ll i = 1 ; i < n ; i++)
    {
    	ll x , y;
    	cin>>x>>y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    	edge.pb({x,y});
    }
    for(ll i = 1 ; i <= n ; i++)
    	cin>>arr[i];
    pair<ll,ll> check = {0,0};
    for(ll i = 0 ; i < edge.size() ; i++ )
    {
    	if(arr[edge[i].ff] != arr[edge[i].ss])
    	{
    		check = edge[i];
    		break;
    	}
    }
    if(check.ff == 0)
    {
    	cout<<"YES\n1\n";
    	return 0;

    }
    // cout<<check.ff << " " << check.ss<<endl;
    if(dfs(check.ff , check.ff))
    {
    	cout<<"YES\n";
    	cout<<check.ff;
    	return 0;
    }
    // vis.clear();
        memset(vis , 0 , sizeof vis);

    if(dfs(check.ss ,check.ss))
    {
    	cout<<"YES\n";
    	cout<<check.ss;
    }
    else
    	cout<<"NO";
    cout<<endl;
}
