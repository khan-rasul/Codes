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
    	cin>>arr[i];
    vector<ll> foo;
    for(ll i = 1 ; i * i <= n ; i++ )
    {
    	if(n % i == 0)
    	{
    		foo.pb(i);
    		foo.pb(n / i);
    	}
    }
    ll ans = 0;
    for(ll x : foo)
    {
    	ll flag = 0;
    	if(n / x >= 3)
    	{
    		cerr<<x<<" ";
    		for(ll i = 0 ; i < x ; i++ )
    		{
    			flag = 1;
    			for(ll j = i ; j < n ; j += x)
    			{
    				if(arr[j] == 0)
    				{
    					flag = 0;
    					break;
    				}
    			}
    			if(flag == 1) break;
    		}
    	}
    	if(flag) {ans = 1 ; break;}
    }
    cout<<(ans ? "YES" : "NO") <<endl;

}
