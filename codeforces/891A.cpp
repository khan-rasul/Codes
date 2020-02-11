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
    ll arr[n] , sum = 0;
    for(ll i = 0 ; i < n ; i++)
    	{cin>>arr[i]; if(arr[i] == 1) sum++; }
    if(sum > 0)
    {
    	cout<<n - sum<<endl;
    	return 0;
    }
    ll dp[n][n];
    memset(dp , -1 , sizeof dp);
    ll ans = mod;
    for(ll i = n - 1 ; i >= 0 ; i-- )
    {
    	for(ll j = i + 1; j < n ; j++ )
    	{
    		if(i + 1 == j)
    			dp[i][j] = __gcd(arr[i] , arr[j]);
    		else
    			dp[i][j] = __gcd(arr[i] , dp[i + 1][j]);
    		if(dp[i][j] == 1)
    			ans = min(ans , j - i + 1);
    	}
    }
    if(ans == mod) cout<<"-1\n";
    else
    	cout<<n - 1 + ans - 1<<endl;
}
