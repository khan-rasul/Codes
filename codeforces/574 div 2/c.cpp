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
    ll h[n][2];
    for(ll i =0 ; i< n ; i++)
    	cin>>h[i][0];
    for(ll i =0 ; i< n ; i++)
    	cin>>h[i][1];
    ll dp[n+2][3];
    dp[0][0] =0;
    dp[0][1] = h[0][0];
    dp[0][2] = h[0][1];
    for(ll i = 1 ; i<n; i++)
    {
    	dp[i][0] = max(dp[i-1][1],dp[i-1][2]);
    	dp[i][1] = max(dp[i-1][0],dp[i-1][2]) + h[i][0];
    	dp[i][2] = max(dp[i-1][0],dp[i-1][1]) + h[i][1];
    }
    cout<<max(dp[n-1][0] , max(dp[n-1][1] , dp[n-1][2]))<<endl;
    
}
