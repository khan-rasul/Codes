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
    ll n;
	cin>>n;
	ll arr[n];
	ll sum=0;
	for(ll i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	ll dp[n+1][n+1];
	memset( dp ,0 , sizeof dp);
	for(ll i=n-1;i>=0;i--)
	{
		for(ll j=i;j<n;j++)
		{
			if(i == j)
				dp[i][j] = arr[i];
			else
				dp[i][j] = max( arr[i] - dp[i+1][j] , arr[j] - dp[i][j-1]);
		}
	}
	cout<< dp[0][n-1]<<endl;
}
