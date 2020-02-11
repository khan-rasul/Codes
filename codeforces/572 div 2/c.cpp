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
int main()
{
    //fast();
    ll n;
    cin>>n;
    vector< vector<pair<ll,ll> > > foo( (ll)log2(n) + 10);
    for(ll i=0 ; i< n ;i++)
    {
    	ll x;
    	cin>>x;
    	foo[0].pb({x,0});
    }
    ll k =0, p =1;
    while(foo[k].size() > 1)
    {
    	for(ll i = 0 ; i + p< foo[k].size(); i++)
    	{
    		foo[k+1].pb( {(foo[k][i].ff + foo[k][i+p].ff) %10 , 
    			foo[k][i].ss + foo[k][i+p].ss + ((foo[k][i].ff + foo[k][i+p].ff) >=10)});
    	}
    	p*=2;
    	k++;
    }
    ll q;
    cin>>q;
    while(q--)
    {
    	ll l,r;
    	cin>>l>>r;
    	l--;r--;
    	ll index= log2(r-l +1 );
    	cout<<foo[index][l].ss<<endl;
    }
}
