/*
* Look in my eyes, what do you see?
* The cult of personality
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
    string s;
    cin>>s;
    ll n = s.length() ;
    ll dp[n + 1][n + 1];
    pair<ll,ll> pos[n + 1][n + 1];
    memset(dp , 0 ,sizeof dp);
    for(ll i = n - 1 ; i >= 0 ; i-- )
    {
    	for(ll j = i + 1 ; j < n ; j++ )
    	{
    		if(s[i] == s[j])
    		{
    			if(i + 1 == j)
				{
					dp[i][j] = 2;
					pos[i][j] = {i , j};
				}
				else
				{
					if(dp[i + 1][j - 1] == 0 || s[i] != s[ pos[i + 1][j - 1].ff ])
					{
						dp[i][j] = 2 + dp[i + 1][j - 1];
						pos[i][j] = {i , j};
					}
					if(dp[i][j] < max(dp[i + 1][j] , dp[i ][j - 1]) )
					{
						if(dp[i + 1][j] > dp[i][j - 1])
						{
							dp[i][j] = dp[i + 1][j];
							pos[i][j] = pos[i + 1][j];
						}
						else
						{
							dp[i][j] = dp[i][j - 1];
							pos[i][j] = pos[i][j - 1];
						}
					}
				}
    		}
    		if(dp[i][j] < max(dp[i + 1][j] , dp[i ][j - 1]) )
			{
				if(dp[i + 1][j] > dp[i][j - 1])
				{
					dp[i][j] = dp[i + 1][j];
					pos[i][j] = pos[i + 1][j];
				}
				else
				{
					dp[i][j] = dp[i][j - 1];
					pos[i][j] = pos[i][j - 1];
				}
			}
    	}	
    }
    cout<<dp[0][n - 1]<<endl;
}
