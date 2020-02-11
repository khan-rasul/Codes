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
ll power(ll a, ll b, ll m)
{
	if(b==1)
		return a % m;
	ll temp = power(a,b/2,m);
	temp = ( temp * temp ) % m;
	if(b % 2)
		temp= (a * temp) % m;
	return temp;
} 
int main()
{
    // fast();
    ll fact[100010];
    fact[0] = 1;
    for(ll i = 1; i < 100010 ; i++)
    {
    	fact[i] = (i * fact[i - 1]) % mod;
    }
    ll n;
    cin>>n;
    ll dp[n + 4] = {0};
    dp[0] = 0;
    for(ll i = 1 ; i <= n ; i++ )
    {
        cout<<dp[i - 1]<<" ";
    	dp[i] = ( i * dp[i - 1] + fact[i - 1]) % mod;
    }
    cout<<(dp[n] * power(fact[n] , mod - 2 , mod)) % mod<<endl;
}
