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
ll n , m;
vector<pair<ll,ll> > edge,dom;

int main()
{
    //fast();
    cin>>n>>m;
    edge.resize(m + 1);
    for(ll i = 0 ; i < m ; i++)
    {
    	cin>>edge[i].ff>>edge[i].ss;
    }
    for(ll i = 1 ; i <= 6 ; i++)
    {
    	for(ll j = i ; j<= 6 ; j++ )
    		dom.pb({i,j});
    }
    if(n<=6) cout<<m<<endl;
    else
    {
    	cout<< min( 16ll , m) <<endl;
    }

}
