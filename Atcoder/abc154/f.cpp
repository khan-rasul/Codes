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
const ll nax = 100;
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
int main()
{
    // fast();
    ll fact[nax];
    fact[0] = 1;
    for(ll i = 1 ; i < nax ; i++ )
    	fact[i] = (i * fact[i - 1]) % mod;
    ll r1 ,r2 , c1,c2;
    cin>>r1>>c1>>r2>>c2;
    ll sum = 1 , term = 1;
    for(ll i = c1 + 1; i <= c2 ; i++)
    {
    	term = (term * (r1 + i) % mod) * power(i , mod - 2 , mod) % mod;
    	sum = ( sum + term ) % mod;
    }
    // cout<<sum;
    ll ans = 0 ;
    for(ll i = r1 ; i <= r2 ; i++ )
    {
    	term = fact[i + c1] * power(fact[i] , mod - 2 , mod) % mod;
    	cout<<(term * sum) % mod<<" ";
    	ans = ans + ( term * sum % mod);
    }
    ans = ans * power(fact[c1] , mod - 2 , mod) % mod;
    // cout<<ans<<endl;


}
