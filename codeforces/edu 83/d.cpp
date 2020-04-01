/*
* I'm a Ghost
* Now you see me, now you don't
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 998244353
#define inf ((ll)1e18)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
ll memo[1000000];

ll fact(ll n)
{
	if(memo[n] != 0) return memo[n];
	return memo[n] = (n * fact(n - 1)) % mod;;
}
ll power(ll a, ll b, ll m)
{
	if(b == 0) return 1;
	if(b == 1)
		return a % m;
	ll temp = power( a , b / 2 , m );
	temp = ( temp * temp ) % m;
	if(b % 2)
		temp = (a * temp) % m;
	return temp;
} 

ll comb(ll n , ll r)
{
	return (fact(n) * power(fact(r) , mod - 2 , mod) % mod) * power(fact(n - r) , mod - 2 , mod) % mod;
}
int main()
{
    // fast();
    memo[0] = 1;
    ll n , m;
    cin>>n>>m;
    ll ans = comb(m , n - 1) * (n - 2) % mod;
    ans = ans * power(2 , (n - 3 + mod - 1) % (mod - 1) , mod ) % mod;
    cout<<ans<<endl;
    
}
