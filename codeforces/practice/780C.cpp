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
vector<ll> col; 
void dfs(ll u , ll p , ll a)
{
	ll v = 1;
	for(ll x : adj[u] )
	{
		if(col[x] == 0 )
		{
			while(v == p || v == a)
				v++;
			col[x] = v;
			dfs(x , v , p );
			v++;
		}
	}
}
int main()
{
    //fast();
    cin>>n;
    adj.resize( n + 3 );
    col.resize( n + 3 , 0 );
    for(ll i = 1 ; i <  n ; i++)
    {
    	ll a, b;
    	cin>>a>>b;
    	adj[a].pb(b);
    	adj[b].pb(a);
    }
    dfs(1 , -1 , -1);
    cout<< *max_element(col.begin() , col.end() ) << endl;
    for(ll i = 1 ; i<= n ; i++)
    	cout<<col[i]<<" ";
    cout<<endl;

}
