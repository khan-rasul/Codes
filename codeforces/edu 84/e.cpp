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
    ll n;
    cin>>n;
    for(ll i = 1 ; i < n ; i++)
    {
    	ll res = (10 * 9 * 9 * ( (n - i - 2 < 0 ) ? 0 : power(10 , n - i - 2 , mod)) * (n + 1 - i - 2)) % mod;
    	ll temp = (10 * 9 * ( (n - i - 1 < 0 ) ? 0 : power(10 , n - i - 1 , mod)) * 2) % mod;
    	res = (res + temp) % mod;
    	cout<<res<<" ";
    }
    cout<<10<<endl;
}
