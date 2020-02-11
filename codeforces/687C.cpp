/*
* You had no aura, I had no wings
* You had your troubles and I had my things
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
bool dp[505][505][505];
int main()
{
    // fast();
    ll n , k;
    cin>>n>>k;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
    	cin>>arr[i];
    dp[0][0][0] = 1;
    dp[0][arr[0]][arr[0]] = 1;
    dp[0][arr[0]][0] = 1;
    for(ll i = 0 ; i < n - 1 ; i++)
    {
    	for(ll j = 0 ; j <= k ; j++ )
    	{
    		for(ll x = 0 ; x <= k ; x++)
    		{
    			if(dp[i][j][x])
    			{
    				if(j + arr[i + 1] <= k && x + arr[i + 1] <= k)
    					dp[i + 1][j + arr[i + 1]][x + arr[i + 1]] = dp[i][j][x];
    				if(j + arr[i + 1] <= k)
	    				dp[i + 1][j + arr[i + 1]][x] = dp[i][j][x];
	    			dp[i + 1][j][x] = dp[i][j][x];
	    		}
    		}
    	}
    }
    set<ll> foo;
    for(ll i = 0; i < n ; i++ )
    {
    	for(ll j = 0 ; j <= k ; j++ )
    	{
    		if(dp[i][k][j])
    		foo.insert(j);
    	}
    }
    cout<<foo.size()<<endl;
    for(ll x : foo)
    	cout<<x<<" ";
}
