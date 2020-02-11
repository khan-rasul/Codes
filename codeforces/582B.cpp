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
vector<vector<ll> > mat_expo (vector<vector<ll> > a, ll b , ll s)
{
	if(b==1)
		return a;
	vector<vector<ll> > temp = mat_expo(a,b/2,s), foo( s);
	for(ll i=0;i<s;i++)
	{
		foo[i].reserve(s);
		for(ll j =0;j<s;j++)
		{
			ll sum = -inf;
			for(ll k =0;k<s;k++)
			{
				sum = max(sum , temp[i][k] + temp[k][j]) ;
			}
			foo[i][j] = sum;
		}
	}
	if(b % 2)
	{
		for(ll i=0;i<s;i++)
		{
			for(ll j =0;j<s;j++)
			{
				ll sum = -inf;
				for(ll k =0;k<s;k++)
				{
					sum = max( sum , foo[i][k] + a[k][j]);
				}
				temp[i][j]=sum;
			}
		}
		return temp;
	}
	return foo;
}
int main()
{
    // fast();
	ll n, t;
	cin>>n>>t;
	vector< vector<ll> > dp(n);
	ll arr[n];
	for(ll i = 0 ; i < n ; i++ )
	{
		cin>>arr[i];
	}
	for(ll i = 0 ; i < n ; i++ )
	{
		dp[i].assign(n , 0);
		for(ll j = 0 ; j < n ; j++ )
		{
			if(arr[i] > arr[j])
				dp[i][j] = -inf;
			else
			{
				dp[i][j] = 1;
				for(ll k = 0 ; k < j ; k++)
					if(arr[k] <= arr[j] && arr[k] >= arr[i])
						dp[i][j] = max(dp[i][j] , dp[i][k] + 1);
			}
		}
	}
	dp = mat_expo(dp , t , n);
	ll ans = 0;
	for(ll i = 0 ; i < n ; i++ )
	{
		for(ll j = 0 ; j < n ; j++ )
		{
			ans = max(ans , dp[i][j]);
		}
	}
	cout<<ans<<endl;
}
