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
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
    	cin>>arr[i];
    ll ans = 0 , ansi = -1;
    ll pref[n] = {0} , suff[n] = {0};
    for(ll i = 1 ; i < n ; i++ )
    {
    	pref[i] = pref[i - 1] | arr[i - 1];
    }
    for(ll i = n - 2 ; i >= 0 ; i-- )
    {
    	suff[i] = suff[i + 1] | arr[i + 1];
    }
    for(ll i = 0 ; i < n ; i++ )
    {
    	ll x = pref[i] | suff[i];
    	if( (arr[i] | x ) - x >= ans)
    	{
    		ans = (arr[i] | x) - x;
    		ansi = i;
    	}
    }
    cout<<arr[ansi]<<" ";
    for(ll i = 0 ; i < n ; i++ )
    {
    	if(i != ansi)
    		cout<<arr[i]<<" ";
    }
}
