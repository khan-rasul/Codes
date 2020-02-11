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
    ll n ; 
    cin>>n;
    map< pair<ll,ll> ,ll >   foo;
    vector< pair<ll,ll > > bar;
    for( ll i =0 ; i< 4*n + 1; i++ )
    {
    	ll x,y;
    	cin>>x>>y;
    	foo[{x,0}]++;
    	foo[{0,y}]++;
    	bar.pb ( {x,y});
    }
    vector<ll> x,y;
    for(auto  it : foo)
    {
    	if(it.ss >=n)
    	{
    		if(it.ff.ff == 0)
    			y.pb(it.ff.ss);
    		else
    			x.pb(it.ff.ff);
    	}
    }
    sort(x.begin(), x.end());
    sort(x.begin(), x.end());
    for(auto a:x)
    	cout<<a<<" ";
    cout<<endl;
    for(auto a: y)
    	cout<<a<<" ";
    // for(ll i =0 ; i< 4*n +1 ;i++)
    // {
    // 	if( !binary_search(x.begin() , x.end() , bar[i].ff) || !binary_search(y.begin() , y.end() , bar[i].ss))
    // 	{
    // 		cout<<bar[i].ff<<" "<<bar[i].ss<<endl;
    // 		break;
    // 	}
    // }
}
