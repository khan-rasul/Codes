/*
* I'm a Ghost
* Now you see me, now you don't
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
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
    	cin>>arr[i];
    ll dp[n + 2][n + 2][4];
    memset(dp , 0 , sizeof dp);
    for(ll i = n - 1 ; i >= 0 ; i-- )
    {
    	for(ll j = i ; j < n ; j++ )
    	{
    		if(i == j)
    		{
    			dp[i][j][0] = dp[i][j][1] = arr[i];
    			dp[i][j][2] = 1;
    			continue;
    		}
    		if(i + 1 == j )
    		{
    			if(arr[i] == arr[j]) 
    			{
    				dp[i][j][0] = dp[i][j][1] = arr[i] + 1;
    				dp[i][j][2] = 1;
    			}
    			else
    			{
    				dp[i][j][0] = arr[i] ; dp[i][j][1] = arr[j];
    				dp[i][j][2] = 2;
    			}
    			continue;
    		}
    		dp[i][j][2] = inf;
    		for(ll k = i ; k < j ; k++ )
    		{
    			// merge dp[i][k] and dp[k + 1][j]
    			if(dp[i][k][1] == dp[k + 1][j][0] )
    			{
    				if(dp[i][j][2] > dp[i][k][2] + dp[k + 1][j][2] - 1)
    				{
    					dp[i][j][2] = dp[i][k][2] + dp[k + 1][j][2] - 1;
    					dp[i][j][0] = dp[i][k][0];
    					dp[i][j][1] = dp[k + 1][j][1];
    					if(dp[i][k][2] == 1)
    						dp[i][j][0]++;
    					if(dp[k + 1][j][2] == 1)
    						dp[i][j][1]++;
    				}
    			}
    			else
    			{
    				if(dp[i][j][2] > dp[i][k][2] + dp[k + 1][j][2])
    				{
    					dp[i][j][2] = dp[i][k][2] + dp[k + 1][j][2];
    					dp[i][j][0] = dp[i][k][0];
    					dp[i][j][1] = dp[k + 1][j][1];
    				}
    			}

    		}
    	}
    }
    cout<<dp[0][n - 1][2]<<endl;
}
