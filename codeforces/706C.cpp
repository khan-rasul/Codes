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
string rev(string s)
{
	reverse( s.begin() , s.end() );
	return s;
}
int main()
{
    //fast();
    ll n;
    cin>>n;
    string s[n];
    ll arr[n];
    for(ll i = 0 ; i < n ; i++)
    	cin>>arr[i];
	for(ll i = 0 ; i < n ; i++)
		cin>>s[i];
	ll dp[n + 2][2];
	memset(dp , -1 , sizeof dp);
	dp[0][0] = 0; dp[0][1] = arr[0];
	for(ll i = 1 ; i < n ; i++)
	{
		if(s[i] >= s[i - 1] && dp[i - 1][0] != -1)
			dp[i][0] = dp[i - 1][0];
		if( s[i] >= rev(s[i - 1] ) && dp[i - 1][1] != -1)
		{
			if(dp[i][0] == -1)
				dp[i][0] = dp[i - 1][1];
			else
				dp[i][0] = min(dp[i][0] , dp[i - 1][1] );
		}

		if( rev(s[i]) >= s[i - 1] && dp[i - 1][0] != -1)
			dp[i][1] = dp[i - 1][0] + arr[i];
		if( rev(s[i]) >= rev(s[i-1]) && dp[i - 1][1] != -1)
		{
			if(dp[i][1] == -1)
				dp[i][1] = dp[i - 1][1] + arr[i];
			else
				dp[i][1] = min(dp[i][1] , dp[i - 1][1] + arr[i] );
		}
	}
	ll ans = 1ll<<60;
	if(dp[n - 1][0] != -1)
		ans = dp[n - 1][0];
	if(dp[n - 1][1] != -1)
		ans = min(ans , dp[n - 1][1]);
	cout<< ((ans == 1ll<<60) ? -1 : ans )<<endl;
}
