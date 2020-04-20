/*
* I'm a Ghost
* Now you see me, now you don't
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
// #define mod 1000000007
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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n , mod;
    	cin>>n>>mod;
    	vector<ll> foo;
    	ll b = 1 ,bp = 0;
    	foo.pb(0);
    	while((2*b - 1 ) <= n)
    	{
    		foo.pb(b);
    		bp = (2*b - 1 );
    		b *= 2;
    	}
    	if(n - bp)
    	foo.pb(n - bp);
    	ll dp[40][40];
    	memset(dp , 0 , sizeof dp);
    	dp[1][1] = foo[1];
    	for(ll i = 2 ; i < foo.size() ; i++ )
    	{
    		dp[i - 1][0] = 1;
    		for(ll k = 1 ; k <= i ; k++)
    		{
    			dp[i][k] = (dp[i - 1][k] + dp[i - 1][k - 1] * foo[i] % mod) % mod;
    		}
    	}
    	ll sum = 0;
    	for(ll i = 0 ; i <= foo.size() ; i++ )
    	{
    		sum = (sum + dp[foo.size() - 1][i]) % mod;
    	}
    	cout<<sum<<endl;
    }

}
