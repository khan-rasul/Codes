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
ll solve(vector<ll> foo , ll k)
{
    ll n = foo.size();
    ll ans = 0;
    for(ll i = 1 ; i < (1 << n) ; i++)
    {
        ll x = 0;
        for(ll j = 0 ; j < n ; j++ )
        {
            if(i & (1<<j))
            {
                x = (x + foo[j]) % k;
            }
        }
        if(x % k == 0)
        	ans++;
    }
    return ans;
}
int main()
{
    // fast();
    ll n , k;
    cin>>n>>k;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++ )
    {
    	cin>>arr[i];
    	arr[i] =( (arr[i] % k ) + k ) % k;
    }
    ll ans = 0;
    for(ll i = 0 ; i < n ; i++ )
    {
    	vector<ll> foo;
    	for(ll j = i ; j < n ; j++ )
    	{
    		foo.pb(arr[j]);
    		ll x = solve(foo , k);
    		if(x > 0 && x % k == 0)  
    		ans++;  	
    	}
    }
    cout<<ans<<endl;
}
