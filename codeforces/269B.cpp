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
    ll n, m;
    cin>>n>>m;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++ )
    {
    	cin>>arr[i];
    	double x; 
    	cin>>x;
    }
    ll dp[n + 1] = {0};
    dp[0] = 1;
    ll ans = 1;
    for(ll i = 1 ; i < n ; i++ )
    {
    	dp[i] = 1;
    	for(ll j = i - 1 ; j >= 0 ; j-- )
    		if(arr[j] <= arr[i])
    			dp[i] = max(dp[i] , dp[j] + 1);
    	ans = max(ans , dp[i]);
    }
    cout<<n - ans<<endl;
}
