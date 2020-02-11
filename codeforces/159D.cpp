/*-----rk_98-----*/
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
    //fast();
    string s;
    cin>>s;
    ll n = s.length();
    ll dp[n + 2][n + 2];
    memset(dp , 0 , sizeof dp);
    for(ll i = n - 1 ; i >= 0 ; i--)
    {
    	for(ll j = i ; j < n ; j++)
    	{
    		if(i == j) dp[i][j] = 1;
    		else if(s[i] == s[j])
    		{
    			if( i + 1 == j)
    				dp[i][j] = 1 + dp[i + 1][j];
    			else
    				dp[i][j] = dp[i + 1][j - 1] - dp[i + 2][j - 1] + dp[i + 1][j];
    		}
    		else
    			dp[i][j] = dp[i + 1][j];
    	}
    }
    ll ans = 0;
    for(ll i = 0 ; i < n ; i++ )
    {
    	for(ll j = i + 1 ; j < n ; j++ )
    	{
    		ans += (dp[0][i] * dp[i + 1][j]);
    	}
    }
    cout<<ans<<endl;
}
