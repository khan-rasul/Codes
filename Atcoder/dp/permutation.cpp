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
const ll nax =3005;
ll dp[nax][nax] , pref[nax];
int main()
{
    //fast();
    ll n;
    cin>>n;
    string s;
    cin>>s;
    dp[1][1] = 1;
    for(ll i = 2 ; i <= n ; i++ )
    {
    	for(ll j = 1 ; j < i ; j++)
    	{
    		pref[j] = (pref[j-1] + dp[i-1][j]) % mod;
    	}
    	for(ll j = 1 ; j <= i ; j++)
    	{
    		ll L, R;
    		if(s[i - 2] == '<' )
    		{
    			L = 1;
    			R = j - 1;
    		}
    		else
    		{
    			L = j;
    			R = i - 1; 
    		}
    		dp[i][j] = (pref[R] - pref[L-1] + mod) % mod;
    	}
    }
   	ll ans = 0;
   	for(ll i = 1 ; i <= n ; i++)
	{
		ans+=dp[n][i];
		ans %= mod;
	}
   	cout<<ans<<endl;
}
