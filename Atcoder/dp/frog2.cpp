/*-----lusar98-----*/
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
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)
    	cin>>arr[i];
    ll dp[n+2];
    dp[0]=0;
    for(ll i=1;i<n;i++)
    {
        dp[i]=1ll<<60;
        for(ll j=1;j<=k && i-j>=0;j++)
    	dp[i] = min(dp[i-j] + abs(arr[i]-arr[i-j]), dp[i]);
    }
    cout<<dp[n-1]<<endl;
}
