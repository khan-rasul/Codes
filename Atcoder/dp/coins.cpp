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
    // fast();
    ll n;
    cin>>n;
    double arr[n];
    for(ll i=0;i<n;i++)
    	cin>>arr[i];
    double dp[n+2];
    memset(dp,0,sizeof dp);
    dp[0]=1;
    for(ll i=0;i<n;i++)
    {
    	double x = arr[i];
    	for(ll j = i+1 ;j >= 0;j--)
    	{
    		dp[j] = (j == 0? 0: dp[j-1]*x) + dp[j] * (1-x);
    	} 
    }
	ll h = n/2;
	double ans=0;
	while(h++ <= n)
	{
		ans += dp[h];
	}
	printf("%.10lf\n", ans );

}
