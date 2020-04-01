/*
* I'm a Ghost
* Now you see me, now you don't
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 998244353
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
    for(ll i = 0 ; i < n ; i++ )
    	cin>>arr[i];
    ll m = n - k;
    ll ans = n * (n + 1) / 2 - m * (m + 1) / 2;
    cout<<ans;
    ll flag = 0 , cnt = 1;
    ans = 1;
    for(ll i = 0 ; i < n ; i++ )
    {
    	if(arr[i] > m)
    	{
    		if(flag)
    		{
    			ans = ans * cnt % mod;
    		}
    		cnt = 1;
    		flag = 1;
    	}
    	else
    	cnt++;
    } 
    cout<<" "<<ans<<endl;
}
