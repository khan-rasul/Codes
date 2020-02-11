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
ll par[150000 + 10];
vector<vector<ll> > foo;
ll fp(ll x)
{
	return par[x] = (par[x] == x ? x : fp(par[x]) );
}
void un(ll x , ll y)
{
	ll px = fp(x) , py = fp(y);
	if(foo[py].size() > foo[px].size() ) swap(px ,py);
	par[py] = px;
	for(ll i = 0 ; i < foo[py].size() ; i++)
		foo[px].pb( foo[py][i] );
}
int main()
{
    //fast();
    cin>>n;
    foo.resize( n + 10);
    for(ll i = 1 ; i <= n ; i++ )
    	{par[i] = i; foo[i].pb(i);}
    for(ll i = 1 ; i < n ; i++ )
    {
    	ll x, y;
    	cin>>x>>y;
    	un(x , y);
    }
    ll i;
    for(i = 1 ; i<= n && foo[i].size() != n; i++);
    for(ll x : foo[i])
    	cout<<x<<" ";
}
