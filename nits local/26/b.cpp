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
    ll n , k;
    cin>>n>>k;
    ll arr[n];
    map<ll ,ll > foo;
    for(ll i = 0 ; i < n ; i++ )
    {
    	cin>>arr[i];
    	foo[arr[i] % k]++;
    }
    ll ans = 0;
    for(pair<ll,ll> x : foo)
    {
    	if(x.ff == 0)
    	{
    		continue;
    	}
    	else
    	{
    		ans += min(x.ss , foo[k - x.ff]);
    	}
    }
    ans /= 2;
    if(foo[0] > 0)
    {
    	ans += foo[0] ;
    }
    cout<<ans<<endl;
    
}
