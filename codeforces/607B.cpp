/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf (1ll<<60)
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
    for(ll i = 0; i < n ; i++ )
    	cin>>arr[i];
    ll dp[n + 2][n + 2];
    for(ll i = n - 1 ; i >= 0 ; i-- )
    {
    	for(ll j = i ; j < n ; j++ )
    	{
    		if(i == j) {dp[i][j] = 1; continue;}
    		else 
    		{
    			ll temp = inf;
	    		for(ll k = i ; k < j ; k++ )
	    			temp = min(temp , dp[i][k] + dp[k + 1][j]);
	    		dp[i][j] = temp;
	    	}
	    	if(arr[i] == arr[j] ) 
	    	{
	    		if(i + 1 == j)
	    			dp[i][j] = 1;
	    		else
	    			dp[i][j] = min(dp[i][j] , dp[i + 1][j - 1] );
	    	}
    	}
    }
    cout<<dp[0][n - 1]<<endl;
}
