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
vector< vector< ll > > adj;
int main()
{
    //fast();
	cin>>n;
	adj.resize(n+3);
	for(ll i=0 ;i < n-1 ;i++)
	{
		ll a,b;
		cin>>a>>b;
		adj[b].pb(a);
		adj[a].pb(b);
	}
}
