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
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    	cin>>arr[i];
    ll dp[n+2];
    dp[0]=0;
    dp[1]=abs(arr[1]-arr[0]);
    for(ll i=2;i<n;i++)
    {
    	dp[i] = min(dp[i-1] + abs(arr[i]-arr[i-1]), dp[i-2] + abs(arr[i]- arr[i-2]));
    }
    cout<<dp[n-1]<<endl;
}
