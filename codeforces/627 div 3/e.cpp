/*
* I'm a Ghost
* Now you see me, now you don't
* 	    ~wrt CF obviously~
*/
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
    // fast();
    ll n , h , l , r;
    cin>>n>>h>>l>>r;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++ )
    	cin>>arr[i];
    ll dp[n + 2][h + 2];
    memset(dp , -1 , sizeof dp);
    dp[0][arr[0]] = (l <= arr[0] && arr[0] <= r);
    dp[0][arr[0] - 1] = (l <= arr[0] - 1 && arr[0] - 1 <= r);
    for(ll i = 0 ; i < n - 1 ; i++ )
    {
    	for(ll j = 0 ; j <= h ; j++ )
    	{
    		if(dp[i][j] != -1)
    		{
    			ll x = (j + arr[i + 1]) % h;
    			ll y = (j + arr[i + 1] - 1 + h) % h;
    			dp[i + 1][x] = max(dp[i + 1][x] , dp[i][j] + (l <= x && x <= r) );
    			dp[i + 1][y] = max(dp[i + 1][y] , dp[i][j] + (l <= y && y <= r) );
    		}
    	}
    }
    ll ans = -1;
    for(ll i = 0 ; i <= h ; i++ )
    	ans = max(ans , dp[n - 1][i]);
    cout<<ans<<endl;
}
