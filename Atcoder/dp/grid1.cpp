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
    ll h,w;
    cin>>h>>w;
    string arr[h];
    for(ll i=0;i<h;i++)
    	cin>>arr[i];
    ll dp[h+2][w+2];
    memset(dp,0,sizeof dp);
    dp[0][1]=1;
    for(ll i=0;i<h;i++)
    {
    	for(ll j=0;j<w;j++)
    	{
    		if(arr[i][j]=='.')
    		{
    			dp[i+1][j+1] = (dp[i][j+1] + dp[i+1][j]) % mod;
    		}
    	}
    }
    cout<<dp[h][w]<<endl;
}
