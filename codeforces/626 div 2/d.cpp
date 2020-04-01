/*
* I'm a Ghost
* Now you see me, now you don't
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
    cin>>n;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++ )
    {
    	cin>>arr[i];
    }
    ll ans = 0, chk = 0;
    for(ll i = 0 ; i < n ; i++ )
    {
    	for(ll j = i + 1 ; j < n ; j++ )
    	{
    		// cout<<arr[i] + arr[j]<<" ";
    		ans ^= (arr[i] + arr[j]);
    		chk += (arr[i] ^ arr[j]);
    	}
    	// cout<<endl;
    }
    cout<<ans<<" "<<chk<<endl;
}
