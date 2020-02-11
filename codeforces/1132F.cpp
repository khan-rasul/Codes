/*
* You had no aura, I had no wings
* You had your troubles and I had my things
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
    string s;
    cin>>s;
    ll dp[n + 2][n + 2];
    for(ll i = n - 1 ; i >= 0 ; i-- )
    {
    	for(ll j = i ; j < n ; j++ )
    	{
    		if(i == j)
    		{
    			dp[i][j] = 1;
    			continue;
    		}
    		dp[i][j] = inf;
    		if(s[i] == s[j])
    		{
    			if(i + 1 == j)
				{
					dp[i][j] = 1;
					continue;
				}
    			else
    				dp[i][j] = dp[i + 1][j - 1] + 1;
    		}
    		for(ll k = i ; k < j ; k++ )
    		{
    			dp[i][j] = min(dp[i][j] , dp[i][k] + dp[k + 1][j] - (s[k] == s[j]));
    		}
    	}
    }
    cout<<dp[0][n - 1]<<endl;
}
