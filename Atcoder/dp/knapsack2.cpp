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
    ll n,w;
    cin>>n>>w;
    ll arr[n][2];
    for(ll i=0;i<n;i++)
        cin>>arr[i][0]>>arr[i][1];
    ll dp[n*1000 + 1000];
    for(ll i=0;i<n*1000 + 1000;i++)
        dp[i] = w*10;    
    dp[arr[0][1] ]=arr[0][0];
    dp[0] = 0;
    for(ll i=1;i<n;i++)
    {
        for(ll j =n*1000 ;j>=0;j--)
        {
            if(dp[j]!=-1)
            {
                dp[ j + arr[i][1] ] = min( dp[j] + arr[i][0], dp [j+arr[i][1] ] );
            }
        }
    }
    ll ans=w;
    for(ll j =n*1000 ;j>=0;j--)    
    {
        if(dp[j]<=w)
            {
                cout<<j<<endl;
                break;}
    }    
}
