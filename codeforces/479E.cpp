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
ll dp[5005][5005] , st[5005][10100];
void update(ll i, ll j , ll val)
{
	i += n;
	for(st[j][i] = val; i > 1 ; i /= 2)
		st[j][i >> 1] = (st[j][i] + st[j][i ^ 1]) % mod;
}
ll query(ll j , ll l , ll r)
{
	ll res = 0;
	l += n;
	r += n;
	for( ; l < r ; l /= 2 , r /= 2)
	{
		if(l & 1) res = (res + st[j][l++]) % mod;
		if(r & 1) res = (res + st[j][--r]) % mod;
	}
	return res;
}
int main()
{
    //fast();
    cin>>n>>a>>b>>k;
    dp[a][0] = 1;
    update(a , 0 , 1);
    for(ll i = 1 ; i <= n ; i++ )
    {
    	for(ll j = 1 ; j <= k ; j++ )
    	{
    		// dp[i][j] = summation of dp[l][j - 1] for all l between 
    		// 2 * i - b + 1 to b - 1 if a < b
    		// b + 1 to 2 * i - b - 1 if a > b
    		if( a < b)
    			dp[i][j] = ( query(j - 1 , 2 * i - b + 1 , b ) - dp[i][j - 1] + mod ) % mod;
    		else
    			dp[i][j] = ( query(j - 1 , b + 1 , 2 * i - b ) - dp[i][j - 1] + mod ) % mod;
    		update(i , j , dp[i][j]);
    	}
    }
    ll ans = 0;
    for(ll i = 1 ; i <= n ; i++)
    	ans = (ans + dp[i][k]) % mod;
    cout<<ans<<endl;
}
