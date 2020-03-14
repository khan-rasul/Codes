#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mod (ll)1e9 + 7
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n , a, b ;
		cin>>n>>a>>b;
		string s;
		cin>>s;
		ll dp[n+5][2] ;
		memset(dp , 0 ,sizeof dp);
		dp[0][0] = b;
		dp[0][1] = 1ll<<60;
		for(ll i = 0 ; i< n ;i++)
		{
			if(s[i] == '1')
			{
				dp[i+1][0] = 1ll<<60;
				dp[i+1][1] = dp[i][1] + a + 2 * b; 
			}
			else
			{
				dp[i+1][0] = min( dp[i][0] + a + b, dp[i][1] + 2*a +b);
				dp[i+1][1] = min( dp[i][0] + 2*a + 2*b, dp[i][1] + a + 2*b);
			}
		}
		cout<<dp[n][0]<<endl;
	}
}