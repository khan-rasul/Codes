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
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll arr[n][2];
    	for(ll i = 0 ; i < n ; i++)
    	{
    		cin>>arr[i][0]>>arr[i][1];
    	}
    	ll dam[n] = {0};
    	dam[0] = arr[0][0] - arr[n - 1][1];
    	for(ll i = 1 ; i < n ; i++ )
    	{
    		dam[i] = arr[i][0] - arr[i - 1][1];
    	}
    	ll x = inf , ans = 0;
    	for(ll i = 0 ; i < n ; i++)
    	{
    		if(dam[i] > 0)
    		{
    			ans += dam[i];
    			arr[i][0] -= dam[i];
    		}
    		x = min(x , arr[i][0]);
    	}
    	cout<<ans + x<<endl;
    }
}
