/*
* I'm a Ghost
* Now you see me, now you don't
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
bool isprime(ll x)
{
	for(ll i = 2 ; i * i <= x ; i++ )
		if(x % i == 0) return false;
	return true;
}
int main()
{
    // fast();
    ll n;
    cin>>n;
    ll i ;
    for(i = n ; i <= n + n / 2  ; i++ )
    {
    	if(isprime(i)) break;
    }
    cout<<i<<endl;
    i -= n;
    for(ll j = 0 ; j < n ; j++ )
    {
    	cout<<j + 1<<" "<<(j + 1) % n + 1<<endl;
    }
    for(ll j = 0 ; j < i ; j++ )
    {
    	cout<<j + 1 <<" "<<j + 1 + n / 2<<endl;
    }
}
