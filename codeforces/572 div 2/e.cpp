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
ll power(ll a, ll b, ll m)
{
	if(b == 1)
		return a % m;
	ll temp = power(a ,b / 2 , m);
	temp = ( temp * temp ) % m;
	if(b % 2)
		temp= (a * temp) % m;
	return temp;
} 
int main()
{
    //fast();
    ll n , p, k;
    map<ll,ll> foo;
   	cin>>n>>p>>k;
   	for(ll i = 0 ; i < n ; i++)
   	{
   		ll x;
   		cin>>x;
   		foo[(power(x,4,p) - ((k*x) % p) + p) % p]++;
   	}
   	ll ans = 0;
   	for(auto it = foo.begin() ; it!=foo.end() ;it++)
   	{
   		ll temp =0;
   		if(it->ss >=2)
   		{
   			temp = (it->ss * (it->ss -1) ) /2;
   			ans+=temp;
   		}
   	}
   	cout<<ans<<endl;
}

