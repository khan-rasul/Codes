/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf 1ll<<60
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    //fast();
    ll n , m;
    cin>>n>>m;
    ll dp[m + 1][n + 1] , dp1[m + 1][n + 1];
    memset(dp , 0 , sizeof dp);
	memset(dp1 , 0 , sizeof dp1);
	dp[0][1] = 1;
    // for(ll i = 1 ; i <= n ; i++)
    // 	dp[1][i] = 1;
    for(ll i = 1 ; i <= m ; i++ )
    {
    	for(ll j = 1 ; j <= n ; j++ )
    	{
    		dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
    		// cout<<dp[i][j]<<" ";
    	}
    	// cout<<endl;
    }
    ll pref[n + 1] = {0};
    for(ll i = 1 ; i <= n ; i++)
    	{pref[i] = (pref[i - 1] + dp[m][i]) % mod; }
    ll ans = 0;
    for(ll i = 1 ; i <= n ; i++)
    {
    	ans = ( ans + (dp[m][i] * pref[n - i + 1]) % mod) % mod;
    }
    cout<<ans<<endl;
}
