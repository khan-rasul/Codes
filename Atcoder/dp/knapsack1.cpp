/*-----lusar98-----*/
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
    ll n,w;
    cin>>n>>w;
    ll arr[n][2];
    for(ll i=0;i<n;i++)
    	cin>>arr[i][0]>>arr[i][1];
    ll dp[n+2][w + 10];
    memset(dp,-1,sizeof dp);
    dp[0][ arr[0][0] ]=arr[0][1];
    dp[0][0] = 0;
    for(ll i=1;i<n;i++)
    {
    	for(ll j =0 ;j<=w;j++)
    	{
    		if(dp[i-1][j]!=-1)
    		{
    			if(j+arr[i][0]<=w)
    				dp[i][j+arr[i][0]] = max(dp[i-1][j] + arr[i][1],dp[i][j+arr[i][0]]);
    			dp[i][j] = max(dp[i-1][j],dp[i][j]);
    		}
    	}
    }
    ll ans=-1;
    for(ll i=0;i<=w;i++)
    {
    	ans=max(ans, dp[n-1][i]);
    }
    cout<<ans<<endl;

    
}
