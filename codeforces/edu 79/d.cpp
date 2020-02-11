/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 998244353
#define inf 1ll<<60
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
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
pair<ll,ll> add(pair<ll,ll> a , pair<ll,ll> b)
{
	ll temp = a.ss * b.ss;
	a.ff = a.ff * b.ss + a.ss * b.ff;
	a.ss = temp;
	temp = __gcd(a.ff , a.ss);
	a.ff /= temp ; a.ss /=temp;
	return a;
}
int main()
{
    //fast();
    ll n;
    cin>>n;
    vector<vector<ll> > foo(1000005);
    vector<ll>  bar(n);
    for(ll i = 0 ; i < n ; i++)
    {
    	ll k;
    	cin>>k;
    	while(k-- )
    	{
    		ll x;
    		cin>>x;
    		foo[x].pb(i);
    		bar[i]++;
    	}
    }
    ll ans = 0;
    for(ll i = 1 ; i <= 1000000 ; i++ )
    {
    	pair<ll,ll> a = {0 , 1};
    	ll temp = 0;
    	for(ll j = 0 ; j < foo[i].size() ; j++ )
    	{
    		a = {1 , bar[foo[i][j]]};
    		temp = temp + ( ((a.ff % mod) * power((a.ss % mod) , mod - 2 , mod) ) % mod);
    		temp %= mod;
    	}
    	if( !foo[i].empty())
    	{
    		temp = (((temp % mod) * foo[i].size()) % mod) * power( (n * n) % mod , mod - 2 , mod);
    		temp %= mod;
    	}
    	
    	ans += temp;
    	ans %= mod ;
    	
    }
    cout<<ans<<endl;
}
