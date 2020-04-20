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
ll base = 1;
ll st[500005][27];
string s;
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
ll factorial[1000000];
ll fact(ll n)
{
	if(n < 1)
		return 1;
	if(factorial[n] != 0) return factorial[n];
	return factorial[n] = fact(n - 1) * n % mod;
}
ll comb(ll n , ll r)
{
	return (fact(n) * power(fact(n - r) , mod - 2 , mod) % mod) * power(fact(r) , mod - 2 , mod) % mod;
}

void build()
{
	for(ll i = base - 1 ; i > 0 ; i-- )
	{
		for(ll j = 0 ; j < 26 ; j++)
			st[i][j] = st[i<< 1][j] + st[(i<<1) + 1][j];
	}
}
vector<ll> query(ll l , ll r)
{
	l += base; r += base;
	vector<ll> res(26);
	while(l < r)
	{
		if(l % 2)
		{
			for(ll j = 0 ; j < 26 ; j++)
				res[j] += st[l][j];
			l++;
		}
		if(r % 2)
		{
			r--;
			for(ll j = 0 ; j < 26 ; j++)
				res[j] += st[r][j];

		}
		l /= 2;
		r /= 2;
	}
	return res;
}
void update(ll i , char c)
{
	i += base;
	st[i][s[i - base] - 'a'] = 0;
	s[i - base] = c;
	st[i][s[i - base] - 'a'] = 1;
	while(i > 0)
	{
		for(ll j = 0 ; j < 26 ; j++ )
		{
			st[i>>1][j] = st[i][j] + st[i ^ 1][j]; 
		}
		i /= 2;
	} 

}
int main()
{
    fast();
    ll n , q;
    cin>>n>>q;
    cin>>s;
    base = n + 10;
    for(ll i = 0 ; i < n ; i++ )
    {
    	st[base + i][s[i] - 'a'] = 1;
    }
    build();
    while(q--)
    {
    	ll t;
    	cin>>t;
    	if(t == 1)
    	{
    		ll l , r , k;
    		cin>>l>>r>>k;
    		--l; --r;
    		vector<ll> ans = query(l , r + 1);
    		ll cnt = 0;
    		for(ll j = 0 ; j < 26 ; j++ )
    			if(ans[j]) cnt++;
    		cout<<comb(k + cnt - 1, k)<<endl;
    	}
    	else
    	{
    		ll p ;
    		char c;
    		cin>>p>>c;
    		--p;
    		update(p , c);
    	}
    }
    
}
