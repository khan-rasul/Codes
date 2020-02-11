/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf (1ll<<60)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
ll n , k , a, b;
ll dp[5005][5005];
int main()
{
    //fast();
    cin>>n>>a>>b>>k;
    dp[0][a] = 1;
    for(ll i = 0 ; i < k ; i++ )
    {
    	for(ll j = 1 ; j <= n ; j++ )
    	{
            // increment dp[i + 1][l] with dp[i][j] for all l between 
            // (2 * j - b + 1) to (b - 1) if a < b
            // (b + 1) to (2 * j - b - 1) if a > b
            // except dp[i + 1][j]
    		if( a < b)
			{
                dp[i + 1][ max(1ll , 2 * j - b + 1)] = ( dp[i + 1][ max(1ll , 2 * j - b + 1)] + dp[i][j]) % mod;
                dp[i + 1][j + 1] = ( dp[i + 1][ j + 1] + dp[i][j]) % mod;
                dp[i + 1][ j ] = ( dp[i + 1][ j] - dp[i][j] + mod) % mod;
                dp[i + 1][ b ] = ( dp[i + 1][ b] - dp[i][j] + mod) % mod;
            }
    		else
			{
                dp[i + 1][ b + 1] = ( dp[i + 1][ b + 1] + dp[i][j]) % mod;
                dp[i + 1][j + 1] = ( dp[i + 1][ j + 1] + dp[i][j]) % mod;
                dp[i + 1][ j ] = ( dp[i + 1][ j] - dp[i][j] + mod) % mod;
                dp[i + 1][ min(n + 1 , 2 * j - b) ] = ( dp[i + 1][ min(n + 1, 2 * j - b) ] - dp[i][j] + mod) % mod;
            }
    	}
        for(ll j = 1 ; j <= n ; j++)
            dp[i + 1][j] = ( dp[i + 1][j] + dp[i + 1][j - 1]) % mod;
    }
    ll ans = 0;
    for(ll i = 1 ; i <= n ; i++)
    	ans = (ans + dp[k][i]) % mod;
    cout<<ans<<endl;
}
