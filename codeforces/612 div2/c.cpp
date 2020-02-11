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
ll n;
ll dp[105][105][105][2];
vector<ll> arr;
int main()
{
    //fast();
    cin>>n;
    arr.resize(n);
    ll o = (n + 1) / 2 , e = n / 2;
    for(ll i = 0 ; i<n ; i++)
	{
		cin>>arr[i];
		if(arr[i] != 0)
		(arr[i] % 2) ? o-- : e-- ; 
	}
	for(ll i = 0 ; i < n ; i++)
		for(ll j = 0 ; j < n ; j++)
			for(ll k = 0 ; k < n ; k++)
			{
				dp[i][j][k][0] = mod;
				dp[i][j][k][1] = mod;
			}
	if(arr[0] == 0)
	{
		dp[0][1][0][1] = 0;
		dp[0][0][1][0] = 0;
	}
	else
		dp[0][0][0][arr[0] % 2] = 0;

	for(ll i = 1 ; i < n ; i++)
	{
		for(ll j = 0 ;  j <= o ; j++)
		{
			for(ll k = 0 ; k <= e; k++)
			{
				if(arr[i] == 0)
				{
					dp[i][j + 1][k][1] = min( dp[i][j + 1][k][1] , min(dp[i - 1][j][k][1] , dp[i - 1][j][k][0] + 1) );
					dp[i][j][k + 1][0] = min( dp[i][j][k + 1][0] , min(dp[i - 1][j][k][0] , dp[i - 1][j][k][1] + 1) );
				}
				else
					dp[i][j][k][ arr[i] % 2 ] = min(dp[i][j][k][ arr[i] % 2 ] , min(dp[i - 1][j][k][1] + (arr[i] % 2 == 0) , dp[i - 1][j][k][0] + (arr[i] % 2 == 1)));
			}
		}
	}
	cout<< min( dp[n - 1][o][e][0] , dp[n - 1][o][e][1]);
	
	// cout<<ans<<endl;
}
