/*
* All my senses intensify
* Whenever you and I, we dive
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
const ll nax = 2000006;
ll fact[nax] , inv[nax];
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
void calc_fact(ll n)
{
	fact[0] = 1;
	inv[0] = 1;
    for(ll i = 1 ; i < n ; i++ )
	{
		fact[i] = (i * fact[i - 1]) % mod;
		inv[i] = power(fact[i] , mod - 2 , mod);
	}
}
ll give(ll x , ll y)
{
	if(min(x , y) < 0) return 0;
	ll res = 0;
	ll t = inv[y];
	for(ll i = 1 ; i <= x + 1 ; i++ )
 	{

 		res = res + ( fact[i + y]  * inv[i] % mod) ;
 		if(res > mod) res -= mod;
 	}
 	return res * t % mod ;
}
int main()
{
    // fast();    
    calc_fact(nax);
    ll r1 ,r2 , c1,c2;
    cin>>r1>>c1>>r2>>c2;
    ll ans = (give(r2 , c2) - give(r2 , c1 - 1) - give(r1 - 1 , c2) + give( r1 - 1 , c1 - 1)) % mod;
    if(ans < 0) ans += mod;
    cout<<ans<<endl;
}
