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
    string s;
	ll d;
	cin>>s>>d;
	ll n= s.length();
	ll dp[n+2][d][2];
	memset(dp,0,sizeof dp);
	dp[0][0][0] = 1;
	for(ll i=0 ; i< n; i++)
	{
		for(ll j = 0 ; j < d ;j++)
		{
			for(ll k = 0; k <= 1 ; k++)
			{
				for(ll digit = 0 ;digit <10 ; digit++)
				{
					if(digit> s[i] - '0' && !k)
					{
						break;
					}
					dp[i+1][(j + digit) % d][k || (digit < s[i] -'0')] = 
					(dp[i+1][(j + digit) % d][k || (digit < (s[i] -'0'))] + dp[i][j][k] ) % mod;
				}
			}
		}
	}
	cout<<(dp[n][0][0] + dp[n][0][1] -1 +mod) % mod<<endl;
}
