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
    vector<ll> arr(n);
    for(ll i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    bool dp[k+2]={0};
    dp[0]=0;
    for(ll i=1;i<=k;i++)
    {
    	for(ll j = 0 ; j < n ; j++ )
    	{
    		if( i >= arr[j] && !dp[i] )
    			dp[i]  = !dp[ i - arr[j] ];
    	}
    }
    // for(ll i=0;i<=k;i++)
    // 	cout<<dp[i]<<" ";
    cout<< (!dp[k] ? "Second" : "First" )<<endl;    
}
