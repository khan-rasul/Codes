/*string construction*/
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
    ll t;
    cin>>t;
    while(t--)
    {
	    ll n , k;
	    cin>>n >> k;
	    for(ll i = 0 ; i < k ; i++)
	    {
		    char a;
		    cin>>a;
	    }
	    ll dp[ n + 2][2];
	    memset(dp , 0 , sizeof dp);
	    dp[0][0] = k;
	    for(ll i = 1 ; i < n ; i++)
	    {
	    	if( i % 2 == 0 )
		    {
		    	dp[i][0] = (( ( k - 1 ) *  dp[i - 1][0] ) % mod + (k * dp[i - 1][1]) % mod) % mod;
		    }
		    else
		    {
		    	dp[i][0] = ((( k - 1 ) *  dp[i - 1][0]) % mod + (k * dp[i - 1][1]) % mod) % mod;
		    	dp[i][1] = ((( 26 - k ) * dp[i - 1][0]) % mod + ((26 - k - 1) * dp[i - 1][1]) % mod) % mod;
		    }
	    }
	    cout<<(dp[n-1][0] + dp[n-1][1]) % mod<<endl;
    }
}
