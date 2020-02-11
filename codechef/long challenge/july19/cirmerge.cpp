/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
vector<ll> arr;
ll n;
ll sum(ll l , ll r)
{
	if(l == r) return 0;
	ll res =0;
	if(l< r)
	{
		for(ll i = l ; i<=r; i++)
			res+=arr[i];
	}
	else
	{
		for(ll i = l ; i< n ; i++)
			res+=arr[i];
		for( ll i =0 ; i<=r ;i++)			
			res+=arr[i];
	}
	return res;
}
int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	arr.clear();
    	cin>>n;
    	arr.resize(n);
    	for(ll i =0 ; i < n ;i++)
    		cin>>arr[i];
    	ll dp[n+2][n+2];
    	for(ll i = n-1;i>=0;i--)
    	{
    		for(ll j = i ; j < n ; j++)
    		{
    			if(i == j) {dp[i][j] =0; continue;}
    			dp[i][j] = 1ll<<60;
    			ll add = sum(i,j);
				for(ll k = i ; k  < j ; k++)
				{
					dp[i][j] = min(dp[i][k] + dp[k+1][j] , dp[i][j]);
				}
				dp[i][j] += add;
    		}
    	}
    	for(ll i = n-1 ; i >=0 ; i--)
    	{
    		for( ll j =0 ; j<i ; j++ )
    		{
    			ll add =sum(i,j);
    			dp[i][j] = 1ll<<60;
    			for(ll k = i ; k < n ;k++)
    			{
    				dp[i][j] = min(dp[i][j] , dp[i][k] + dp[(k+1)%n][j]);
    			}
    			for(ll k = 0; k < j; k++)
    				dp[i][j] = min(dp[i][j] , dp[i][k] + dp[k +1][j] );
    			dp[i][j] +=add;

    		}
    	}
    	ll ans =1ll<<60;
    	for(ll i = 0 ; i< n ; i++)
    		ans = min( ans , dp[i][(n-1 + i) % n]);
    	cout<<ans<<endl;
    }
}
