/*
* All my senses intensify
* Whenever you and I, we dive
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
int main()
{
    // fast();
    ll n , a, b ,k;
    cin>>n>>a>>b>>k;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++ )
    	cin>>arr[i];
    vector<ll> foo;
    for(ll i = 0 ; i < n ; i++ )
    {
    	ll x = arr[i] % (a + b) ;
    	if(x == 0)
    	{
    		foo.pb(ceil(1.0 * b / a)) ;
    	}
    	else
    	foo.pb(ceil(1.0 * x / a) - 1) ;
    }
    sort(foo.begin() , foo.end());
    ll ans = 0;
    for(ll i = 0 ; i < n && k >= 0 ; i++)
    {
    	if(foo[i] <= k) 
    	{
    		ans++;
    		k-=foo[i];
    	}
    }
    cout<<ans<<endl;
}
