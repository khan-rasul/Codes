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
int main()
{
    //fast();
    ll n,k,d;
    cin>>n>>k>>d;
    ll dp[n + 5][n + 5][2];
    memset(dp , 0 , sizeof dp);
    dp[n][0][0] = 1;
    for(ll j = 0 ; j < n ; j++ )
    {
    	for(ll i = 1 ; i <= n ; i++ )
	    {
	    	for(ll m = 1 ; m <= i && m <= k ; m++ )
	    	{
	    		if(m >= d)
	    		{
	    			dp[i - m][j + 1][1] += dp[i][j][0] + dp[i][j][1];
	    			dp[i - m][j + 1][1] %= mod;
	    		}
	    		else
	    		{
	    			dp[i - m][j + 1][0] += dp[i][j][0];
	    			dp[i - m][j + 1][1] += dp[i][j][1];
	    			dp[i - m][j + 1][0] %= mod;
	    			dp[i - m][j + 1][1] %= mod;
	    		}
	    	}
	    }
    }
    ll ans = 0;
    for(ll i = 0 ; i <= n ; i++)
    	{ans += dp[0][i][1]; ans %= mod ; }
    cout<<ans<<endl;

}
