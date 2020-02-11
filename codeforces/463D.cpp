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
int main()
{
    //fast();
    ll n , k;
    cin>>n>>k;
    ll arr[k][n + 5] , pos[k][n + 5], dp[n + 5] = {0};
    for(ll i = 0 ; i < k ; i++ )
    {
    	for(ll j = 1 ; j <= n ; j++ )
    	{
    		cin>>arr[i][j];
    		pos[i][arr[i][j]] = j;
    	}
    }
    ll ans = 0;
    for(ll i = 1 ; i <= n ; i++ )
    {
    	ll num = 0;
    	for(ll j = 1 ; j < i ; j++ )
    	{
    		ll flag = 1;
    		for(ll l = 0 ; l < k ; l++ )
    		{
    			if(pos[ l ][ arr[0][i] ] < pos[ l ][ arr[0][j] ])
    			{
    				flag = 0;
    				break;
    			}
    		}
    		if(flag) num = max(num , dp[j]);
    	}
    	dp[i] = num + 1;
    	ans = max(ans , dp[i]);
    }
    cout<<ans<<endl;
}