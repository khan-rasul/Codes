/*-----rk_98-----*/
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
    //fast();
    ll n;
    cin>>n;
    ll arr[2][n ];
    for(ll i = 0 ; i < 2 ; i++ )
    	for(ll j = 0 ; j < n ; j++ )
    		cin>>arr[i][j];
    ll dp[2][n];
    dp[0][0] = arr[0][0];
    dp[1][0] = arr[1][0];
    for(ll i = 1 ; i < n ; i++ )
    {
    	dp[0][i] = min(( i == 1 ? inf : dp[0][i - 2] ) , dp[1][i - 1]) + arr[0][i];
    	dp[1][i] = min(( i == 1 ? inf : dp[1][i - 2] ) , dp[0][i - 1]) + arr[1][i];
    }
    cout<<min(dp[0][n - 1] ,dp[1][n - 1] )<<endl;
}
