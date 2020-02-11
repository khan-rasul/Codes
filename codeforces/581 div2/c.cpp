/*-----rk_98-----*/
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
    string adj[n+2];
    for(ll i = 0; i < n ; i++)
    {
    	cin>>adj[i];
    }
    ll m;
    cin>>m;
    vector<ll> path(m);
    for(ll i = 0 ; i < m ; i++)
	{
		cin>>path[i];
		path[i]--;
	}
	//floyd warshall
	ll dist[n][n];
	for(ll i = 0 ; i< n ; i++)
	{
		for(ll j = 0 ; j < n ; j++)
		{
			if(i==j) dist[i][j] = 0;
			else if(adj[i][j] == '1') dist[i][j] = 1;
			else dist[i][j] = mod;
		}
	}
	for(ll i = 0 ; i < n ;i++)
	{
		for(ll j = 0 ; j < n ; j++)
			for(ll k = 0; k < n ; k++)
				dist[j][k] = min( dist[j][k] , dist[j][i] + dist[i][k]);
	}

    ll dp[m + 5][3][3];
    dp[0][0][0] = 0;
    dp[0][0][1] = mod;
    dp[0][0][2] = -1;
    dp[0][1][0] = 0;
    dp[0][1][1] = 1;
    dp[0][1][2] = -1;
    for(ll i = 1; i < m  ; i++)
    {
    	if(dp[i-1][0][1] <= dp[i-1][1][1] && dist[ path[dp[i-1][0][0]] ][path[i]] >= (i - dp[i-1][0][0]) )
    	{
    		dp[i][0][0] = dp[i-1][0][0] ;
    		dp[i][0][1] = dp[i-1][0][1] ;
    		dp[i][0][2] = dp[i-1][0][0];
    		dp[i][1][0] = i ;
    		dp[i][1][1] = dp[i-1][0][1] + 1;
    		dp[i][1][2] = dp[i-1][0][0];
    	}
    	else
    	{
    		dp[i][0][0] = dp[i-1][1][0] ;
    		dp[i][0][1] = dp[i-1][1][1] ;
    		dp[i][0][2] = dp[i-1][1][0];
    		dp[i][1][0] = i ;
    		dp[i][1][1] = dp[i-1][1][1] + 1;
    		dp[i][1][2] = dp[i-1][1][0];
    	}
    }
    cout<<dp[m-1][1][1]<<endl;
    vector<ll> ans ;
    ans.pb(m-1);
    ll k = dp[m-1][1][2];
    while(k!=-1)
    {
    	ans.pb(k);
    	k = dp[k][1][2];
    }
    for(ll i = ans.size() - 1; i>= 0 ;i--)
    	cout<<path[ans[i] ] + 1<<" ";
}
