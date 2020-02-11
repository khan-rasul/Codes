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
    vector<pair<ll,ll>> foo(n);
    ll arr[n] , brr[n];
    for(ll i = 0 ; i < n ; i++)
    	cin>>foo[i].ff>>foo[i].ss;
    sort(foo.begin() , foo.end());
    for(ll i = 0 ; i < n  ; i++)
    {
    	arr[i] = foo[i].ff;
    	brr[i] = foo[i].ss;
    }
    ll dp[n + 2][2];
    memset(dp , 0 , sizeof dp);
    dp[0][0] = 1;
    dp[0][1] = 0;
    ll ans = mod;
    for(ll i = 1 ; i < n ; i++ )
    {
    	ll p = upper_bound(arr , arr + n , arr[i] - brr[i]) - arr - 1;
    	dp[i][0] = 1 + dp[i - 1][1];
    	if(p == -1)
    		{dp[i][1] = i ; ans = min( ans , n - i - 1 + dp[i][1]);continue;}
    	if(arr[i] - brr[i] == arr[p]) p--;
    	if(p == -1)
    		{dp[i][1] = i;  ans = min( ans , n - i - 1 + dp[i][1]);continue;}
		dp[i][1] = i - p - 1 + dp[p][1]; 
		ans = min( ans , n - i - 1 + dp[i][1]);
    }
    cout<<(ans == mod ? 0 : ans )<<endl;
}
