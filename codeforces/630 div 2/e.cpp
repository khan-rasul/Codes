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
ll power(ll a, ll b, ll m)
{
    if(a == 0) return 0;
	if(b == 0) return 1;
	if(b == 1)
		return a % m;
	ll temp = power( a , b / 2 , m );
	temp = ( temp * temp ) % m;
	if(b % 2)
		temp = (a * temp) % m;
	return temp;
} 
int main()
{
    // fast();
    ll n , m , l , r;
    cin>>n>>m>>l>>r;
    ll x = (r - l + 1);
    ll o = x / 2 , e = x - x / 2;
    cerr<<x % mod<< " "<<abs(o - e)<<endl;
    if(n * m % 2 == 0)
    {
        ll ans = power(x % mod, n * m % (mod - 1), mod) + power(abs(o - e) % mod , n * m % (mod - 1) , mod);
        ans = (ans % mod) * power(2 , mod - 2 , mod);
        cout<<(ans % mod)<<endl;
    }
    else
    {
    	ll ans = power(x , n * m % (mod - 1), mod);
    	cout<<ans<<endl;
    }
    
}
