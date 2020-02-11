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
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
    	cin>>arr[i];
    ll dp[n+2][k +20];
    memset(dp, 0 ,sizeof dp);
    dp[0][0]=1;
    dp[0][arr[0] + 1] =-1;
    for(ll i=1;i<n;i++)
    {
    	for(ll j =0; j<=k;j++)
    	{
    		if(j)
    			dp[i-1][j] = ( dp[i-1][j] + dp[i-1][j-1] ) % mod;
    		dp[i][j] = ( dp[i][j] + dp[i-1][j] ) % mod;
    		if( (j+ arr[i] + 1) <= (k+10) ) 
    			dp[i][j + arr[i] +1 ] = ( dp[i][j + arr[i] +1 ] - dp[i-1][j] + mod ) % mod;
    	}
    }
    for(ll i =1 ;i<=k;i++)
    	dp[n-1][i] = ( dp[n-1][i] + dp[n-1][i-1] ) % mod;
    cout<<dp[n-1][k]<<endl;    
}
