/*
* I'm a Ghost
* Now you see me, now you don't
* 	    ~wrt CF obviously~
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
    ll n;
    cin>>n ;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++ )
    	cin>>arr[i];
    for(ll i = 0 ; i < n ; i++ )
    {
    	ll x;
    	cin>>x;
    	arr[i] -= x;
    }
    sort(arr , arr + n);
    ll ans = 0;
    for(ll i = 0 ; i < n ; i++ )
    {
    	// cerr<<arr[i]<<" ";
    	ll key = arr[i] ;
    	if(arr[i] <= 0) key = -arr[i] + 1;
    	ll p = lower_bound(arr + i + 1, arr + n , key) - arr;
    	// cout<<p<<" ";
    	ans += (n - p );
    }
    cout<<ans<<endl;
}
