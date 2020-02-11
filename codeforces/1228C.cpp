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
vector<ll> pf;
ll power(ll a, ll b, ll m)
{
	if(b == 0) return 1;
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
    ll n , x;
    cin>>x>>n;
    for(ll i = 2 ; i * i <= x ; i++ )
    {
    	if(x % i == 0) pf.pb(i);
    	while(x % i == 0)
    	{
    		x /= i;
    	}
    }
    if(x != 1) pf.pb(x);
    ll ans = 1;
    for(ll i = 0 ; i < pf.size() ; i++ )
    {
    	ll div = pf[i];
    	ll c = 0;
		ll temp = n;
    	while(temp / div )
    	{
    		c = (c + (temp / div)) % (mod - 1);
			temp /= div;
	    }
	    ans = (ans * power(pf[i] , c , mod)) % mod;
    }
    cout<<ans<<endl;
}