/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 998244353
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
ll num(ll p)
{
	ll z=0,ex =10;
	while(p)
	{
		z+=(ex*(p%10));
		p/=10;
		ex*=100;
	}
	return z;
}
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
    //fast();
    ll n;
    cin>>n;
    ll ans=0;
    for(ll i =0 ; i < n ; i++)
    {
    	ll p,x,y;
    	cin>>p;
    	if(p == 1000000000LL)
    	{
    		x = power(10,19,mod);
    		y = power(10,18,mod);
    	}
    	else
    	{
    		x = num(p);
    	    y =x/10;
    	    x%=mod; 
    	    y%=mod;
    	}
    	ans = (ans + ( ( ((n*x)%mod) + ((n*y)%mod) ) % mod)) %mod;
    }
    cout<<ans<<endl;
}
