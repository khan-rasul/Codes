/*-----lusar98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
using namespace std;
ll even(ll n)
{
	return ((n%mod)*(n%mod) + (n%mod) ) %mod;
}
ll odd(ll n)
{
	return ((n%mod)*(n%mod))%mod;
}
ll solve(ll l)
{
	if(!l) return 0;
	double m = l;
	m = log2(m+1);
	ll n = floor(m);
	ll nodd = ( (1ll<<(n+n%2)) - 1 ) / 3;
	ll neven = 2* ( (1ll<<(n-n%2)) - 1 ) / 3;
	ll sum = (odd(nodd) + even(neven))%mod;
	ll left = l - ((1ll<<n) -1);
	ll leftsum =0;
	if(n%2)
	{
		leftsum = (even(neven + left ) - even(neven) + mod ) %mod;
	}
	else
	{
		leftsum =( odd(nodd + left ) - odd (nodd)+ mod ) %mod;
	}
	return (sum + leftsum)%mod;

}
int main()
{
    //fast();
    ll l,r;
    cin>>l>>r;
    cout<< (solve(r) - solve(l-1) +mod ) %mod<<endl;
}