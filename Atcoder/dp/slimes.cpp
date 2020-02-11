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
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for( ll i=0 ; i< n; i++)
    	cin>>arr[i];
    ll dp[n+5][n+5];
    memset(dp, 0 ,sizeof dp);
    for(ll i = n-1;i>=0;i--)
    {
    	ll sum=arr[i];
    	for(ll j = i+1 ; j<n ; j++)
    	{
    		sum+=arr[j];
    		dp[i][j] = 1ll<<60;
    		for(ll k = i ; k<= j ; k++)
    			dp[i][j] = min( dp[i][j], dp[i][k] + dp[k+1][j] );
    		dp[i][j] +=sum;
    	}
    }
    cout<<dp[0][n-1]<<endl;
}
