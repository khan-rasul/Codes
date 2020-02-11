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
    ll h[n] , a[n];
    for( ll i = 0 ; i < n ; i++)
    	cin >> h[i];
    for( ll i = 0 ; i < n ; i++)
    	cin >> a[i];

    ll base = 1;
    while( base <= n) base *= 2;
    vector<ll> st(2 * base);
    ll dp[ n + 2 ] = { 0 };
    for( ll i=0 ; i< n ; i++)
    {
    	ll x = h[i] + base;
        ll best =0 ;
        while(x>1)
        {
            if(x % 2 == 1)
                best = max( best , st[x-1]);
            x/=2;
        }
        dp[ h[i] ] = best + a[i];
        for(ll j = base + h[i] ; j>=1 ; j/=2)
        {
            st[j] = max(st[j] , dp[h[i]] );
        }
    }
    ll ans =0 ;
    for(ll i =0 ; i < n + 2 ; i++)
        ans = max( ans , dp[i] );
    cout<<ans<<endl;
}
