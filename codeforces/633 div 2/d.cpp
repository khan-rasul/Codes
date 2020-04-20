/*
* I'm a Ghost
* Now you see me, now you don't
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
ll n;
vector<vector<ll> adj; 
ll ma , mi;
ll dfs(ll u , ll p = -1)
{
	
}
int main()
{
	// fast();
    cin>>n;
    adj.resize(n + 1);
    for(ll i = 1 ; i < n ; i++ )
    {
    	ll x , y;
    	cin>>x>>y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    }
    ma = n - 1; mi = 0;
    
}
