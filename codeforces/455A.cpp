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
    ll arr[(ll)10e5 + 5] = {0};
    for(ll i = 0 ; i < n ; i++)
    {
    	ll x;
    	cin>>x;
    	arr[x]++;
    }
    ll dp[(ll)10e5 + 5] = {0};
    dp[0] = 0;
    dp[1] = arr[1];
    for(ll i = 2 ; i <= 10e5 ; i++ )
    	dp[i] = max( dp[i-1] , dp[i - 2] + arr[i]*i );
    cout<<dp[(ll)10e5] <<endl;
}
