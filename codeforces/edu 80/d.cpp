/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf 1ll<<60
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    //fast();
    ll n , m;
    cin>>n>>m;
    ll arr[n][m];
    for(ll i = 0 ; i < n ; i++)
    	for(ll j = 0 ; j < m ; j++)
    		cin>>arr[i][j];
    ll dp[n + 2] = {0};
    dp[0] = 0;
    ll ans = inf;
    for(ll i = 0 ; i < m ; i++)
    	ans = min(ans , arr[0][i]) ;
    pair<ll,ll> res = {0 , 0};
    for(ll i = 1 ; i < n ; i++ )
    {
    	ll temp = inf , temp1 = inf;
    	for(ll j = 0 ; j < m ; j++)
    		temp = min(temp , arr[i][j]) ;

    	for(ll j = 0 ; j < m ; j++)
    		temp1 = min(temp1 , max(arr[i][j], arr[dp[i - 1]][j] ) ) ;

    	if(temp > temp1)
		{
			dp[i] = i; 
			if(ans < temp) 
			{
				ans = temp; 
				res = {i , i}; 
			}
		}
    	else 
		{
			dp[i] = dp[i - 1]; 
			if(ans < temp1) 
			{
				ans = temp1 ; 
				res = {dp[i - 1] , i};
			}
		}
    }
    cout<<res.ff + 1<<" "<<res.ss + 1<<endl;
}
