/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf 1ll<<60
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
vector<ll> foo;
ll base;
void build()
{
	ll flag = 0;
	for(ll i = base - 1 ; i > 0 ; i-- ) 
	{
		if(flag)
			foo[i] = foo[i<<1] ^ foo[i<<1|1];
		else
			foo[i] = foo[i<<1] | foo[i<<1|1];
		if(__builtin_popcount(i) == 1) flag = 1 - flag;
	}
}
void update(ll p , ll b)
{
	foo[p + base] = b;
	ll flag = 0;
	for(ll i = base + p ; i > 1 ; i /= 2)
	{
		if(flag)
			foo[i >> 1] = foo[i] ^ foo[i ^ 1];
		else
			foo[i >> 1] = foo[i] | foo[i ^ 1];
		flag = 1 - flag;
	}
}
int main()
{
    //fast();
    ll n , m;
    cin>>n>>m;
    base = 1<<n;
    foo.resize(2 * base);
    for(ll i = 0 ; i < base ; i++ )
    	cin>>foo[base + i];
    build();
    while(m--)
    {
    	ll p , b;
    	cin>>p>>b;
    	p--;
    	update(p , b);
    	cout<<foo[1]<<endl;
    }
}
