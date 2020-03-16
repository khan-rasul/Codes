
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
