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
    ll arr[n][3];
    for(ll i=0;i<n;i++)
    	cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    ll dp[n+2][3];
    dp[n-1][0]=arr[n-1][0];
    dp[n-1][1]=arr[n-1][1];
    dp[n-1][2]=arr[n-1][2];
    for(ll i=n-2;i>=0;i--)
    {
    	dp[i][0]=max(dp[i+1][1] , dp[i+1][2]) + arr[i][0];
    	dp[i][1]=max(dp[i+1][0] , dp[i+1][2]) + arr[i][1];
    	dp[i][2]=max(dp[i+1][1] , dp[i+1][0]) + arr[i][2];
    }
    cout<< max(dp[0][0], max( dp[0][1], dp[0][2] ) )<<endl;
}
