/*
* Fingers Crossed
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

// Dijkstra's algorithm for shortest path from s
vector<ll> dijkstra(ll s , vector<vector<ll> > adj)
{
	ll n = adj.size();
	vector<ll> dis(n , inf);
	vector<bool> vis(n, 0); 
	dis[s] = 0;
	priority_queue<pair<ll,ll>> pq;
	pq.push({-dis[s], s});
	while(!pq.empty())
	{
		pair<ll,ll> u = pq.top(); pq.pop();
		if(vis[u.ss]) continue;
		vis[u.ss] = 1;
		for(ll x : adj[u.ss])
		{
			if(dis[x] > -u.ff + 1)
			{
				dis[x] = -u.ff + 1;
				pq.push({-dis[x] , x});
			}
		}
	}
	return dis;
}
// End of template

int main()
{
    // fast();
    ll n , m;
    cin>>n>>m;
    vector<vector<ll> > adj(n + 1) , dk(n + 1);
    vector<set<ll>>  len(n + 1);
    for(ll i = 0 ; i < m ; i++ )
    {
    	ll x , y;
    	cin>>x>>y;
    	adj[x].pb(y);
    	dk[y].pb(x);
    }
    ll k;
    cin>>k;
    ll path[k];
    for(ll i = 0 ; i < k ; i++ )
    	cin>>path[i];
    vector<ll> dis = dijkstra(path[k - 1] , dk);
    ll lans = 0 , rans = 0;
    for(ll i = 0 ; i < k - 1 ; i++ )
    {
    	vector<ll> temp;
    	for(ll x : adj[path[i]])
    		temp.pb(dis[x]);
    	ll mc = *min_element(temp.begin() , temp.end());
    	ll cnt = 0;
    	for(ll x : temp)
    		if(x == mc)
    			cnt++;
    	if(dis[path[i + 1]] != mc) lans++ , rans++;
    	if(dis[path[i + 1]] == mc && cnt > 1) rans++;
    }
    cout<<lans<<" "<<rans<<endl;
}
