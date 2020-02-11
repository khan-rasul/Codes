/*
* All my senses intensify
* Whenever you and I, we dive
*/
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
    // fast();
    string n;
    ll k;
    cin>>n>>k;
    ll dp[105][2][10];
    memset(dp , 0 , sizeof dp);
    dp[0][0][0] = 1;
    dp[0][0][1] = n[0] - '0' - 1;
    dp[0][1][1] = 1;
    for(ll i = 1 ; i < n.length() ; i++ )
    {
    	for(ll j = 0 ; j <= k ; j++ )
    	{
    		for(ll m = 0 ; m < 10 ; m++ )
	    	{
	    		dp[i][0][j + (m != 0)] += dp[i - 1][0][j];
	    		if(m < n[i] - '0')
	    			dp[i][0][j + (m != 0)] += dp[i - 1][1][j];
	    		if(m == n[i] - '0')
	    		dp[i][1][j + (m != 0)] += dp[i - 1][1][j];
	    	}
	    }
    }
    cout<<dp[n.length() - 1][0][k] + dp[n.length() - 1][1][k]<<endl;
}
