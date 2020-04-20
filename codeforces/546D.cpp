/*
* I'm a Ghost
* Now you see me, now you don't
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll int
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
    ll m = 5000005;
	ll dp[m + 5] = {0};
	ll temp[m + 5] = {0};
	for(ll i = 2 ; i <= m ; i++ )
	{
		if(dp[i]) continue;
		for(ll j = 0 ; j <= m / i + 5; j++) temp[j] = 0;
		for(ll j = i ; j <= m ; j += i)
		{
			dp[j] += temp[j / i] + 1;
			temp[j] = temp[j / i] + 1;
		}
	}
	for(ll i = 2 ; i <= m ; i++ )
	{
		dp[i] += dp[i - 1];
	}
    ll t;
    cin>>t;
    while(t--)
    {
    	ll a , b;
    	cin>>a>>b;
    	cout<<dp[a] - dp[b]<<endl;
    }
}
