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
const ll nax =100000 * 2 + 10;
ll par[nax];
ll tree[nax];
ll find(ll u)
{
	return par[u] = (u == par[u] ? u: find(par[u]) );
}
ll treesize(ll u)
{
	return tree[find(u)];
}
void un(ll a , ll b)
{
	ll x = find(a) , y = find(b);
	tree[x] += tree[y];
	par[y] = x;
}
int main()
{
    //fast();
    ll n , m;
    cin >> n >> m;
    vector< pair< ll, pair< ll , ll >  > > edges(n);
    for(ll i = 0 ; i < n - 1; i++)
	    cin>> edges[i].ss.ff >> edges[i].ss.ss >> edges[i].ff;
	sort(edges.begin() ,edges.end() );
	vector< pair< ll , ll >  > q(m);
	for(ll i = 0 ; i<m ; i++)
	{
		cin>>q[i].ff;
		q[i].ss = i;
	}
	sort(q.begin() ,q.end() );
	for(ll i = 0 ; i <= n ; i++) 
	{
		par[i] = i;
		tree[i] = 1;
	}
	ll ans[m+1], v = 1;
	ll part = 0;
	for(ll i = 0 ; i< m ; i++)
	{
		while(v < n && edges[v].ff <= q[i].ff )
		{
			ll temp = treesize(edges[v].ss.ff);
			part -= ((temp * (temp - 1)) /2);

			temp = treesize(edges[v].ss.ss);
			part -= ((temp * (temp - 1)) /2);

			un(edges[v].ss.ff , edges[v].ss.ss );
			temp = treesize(edges[v].ss.ss);
			part += ((temp * (temp - 1) ) /2);
			v++;
		}
		ans[q[i].ss] = part;
	}
	for(ll i = 0; i < m ; i++)
		cout<<ans[i]<<" ";
}
