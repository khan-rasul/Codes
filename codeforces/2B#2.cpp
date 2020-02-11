/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll int
#define mod 1000000007
#define inf (1ll<<60)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
ll make(ll x , ll y)
{
	if(x == 0) return 1;
	ll a = 0 ;
	while(x % y == 0)
	{
		a++;
		x/=y;
	}
	return a;
}
int main()
{
    fast();
    ll n;
    cin>>n;
    ll arr[n + 2][n + 2][2] , zx = -1 ,zy = -1;
    for(ll i = 1 ; i <= n ; i++ )
    	for(ll j = 1 ; j <= n ; j++)
    	{
    		ll x;
    		cin>>x;
            if(x == 0) { zx = i ;zy = j;}
    		arr[i][j][0] = make(x , 2);
            arr[i][j][1] = make(x , 5);
    	}
    ll dp[n + 2][n + 2][2];
    for(ll i = 0 ; i <= n ; i++ )
    	for(ll j = 0 ; j <= n ; j++)
		{
            dp[i][j][0] = mod;
            dp[i][j][1] = mod;
        }
    dp[0][1][0] = 0;
    dp[0][1][1] = 0;
    for(ll i = 1 ; i <= n ; i++ )
    {
    	for(ll j = 1 ; j <= n ; j++ )
    	{
    		dp[i][j][0] = min(dp[i - 1][j][0] , dp[i][j - 1][0]) + arr[i][j][0];
            dp[i][j][1] = min(dp[i - 1][j][1] , dp[i][j - 1][1]) + arr[i][j][1];
    	}
    }
    ll f = 0 , ans = min(dp[n][n][0] , dp[n][n][1]);
    if(dp[n][n][0] > dp[n][n][1])
        f = 1;
    string s = "";
    ll x = n , y = n;
    while(!(x == 1 && y == 1))
    {
        if( dp[x ][y - 1][f] + arr[x][y][f] == dp[x][y][f])
        {
            s += "R";
            y--;
        }
        else
        {
            s += "D";
            x--;
        }
    }
    reverse(s.begin() , s.end());
    if(zx != -1 && ans > 1)
    {
        ans = 1;
        s = "";
        for(ll i = 1 ; i < zy ; i++)
            s += "R";
        for(ll i = 1 ; i < n ; i++)
            s += "D";
        for(ll i = zy ; i < n ; i++)
            s += "R";
    }
    cout<<ans<<endl;
    cout<<s<<endl;
}