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
    ll n , k;
    cin>>n>>k;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
    	cin>>arr[i];
    vector<pair<ll,ll>>  diff;
    for(ll i = 1; i< n ; i++)
    {
    	diff.pb({arr[i] - arr[i-1] , i });
    }
    sort( diff.rbegin() , diff.rend() );
    vector<ll> indices;
    for( ll i = 0 ; i < k-1 ; i++)
    	indices.pb(diff[i].ss);
    sort(indices.begin() , indices.end());
    indices.pb(n);
    ll ans = 0 , mi = mod , ma =0;
    k = 0;
    for(ll i = 0 ; i < n ; i++)
    {
    	mi = min( mi , arr[i]);
    	ma = max( ma , arr[i] );
    	if(indices[k] == i + 1)
    	{
    		ans +=(ma - mi);
    		k++;
    		ma = 0;
    		mi = mod;
    	}
    }
    cout<<ans<<endl;
}
