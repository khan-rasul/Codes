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
ll n , k;
vector<ll> p,t;
vector<vector<ll> > adj;
ll memo[10005][1005];

ll solve(ll i ,ll m)
{
	if(m <= 0) return 0;
	ll ans = 0;
	if(memo[i][m] != -1) return memo[i][m];
	for(ll x : adj[i])
	{
		if(m - t[i] >= 0)
		ans = max(ans , max( solve(x , m - t[i]) + p[i] , solve(x , m ) ) );
		else
		ans = max( ans , solve(x , m ) );
	}
	if(adj[i].empty() )
	{
		if( m >= t[i])
			ans = p[i];
	}
	return memo[i][m] = ans;
} 

int main()
{
    //fast();
    cin>>n>>k;
    memset(memo , -1 , sizeof memo);
    p.resize(n + 1);
    t.resize(n + 1);
    adj.resize(n + 1);
    for(ll i = 1 ; i <= n ; i++)
    {
    	cin>> t[i];
    }
    for(ll i = 1 ; i <= n ; i++)
    {
    	cin>> p[i];
    }
    for(ll i = 0 ; i < n - 1 ; i++)
    {
    	ll x , y;
    	cin>>x>>y;
    	adj[x].pb(y);
    }
    cout<<solve(1 , k)<<endl;
}
