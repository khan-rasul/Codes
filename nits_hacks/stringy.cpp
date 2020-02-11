/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf (1ll<<60)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
const ll p1 = 31 , p2 = 31;
const ll m1 = mod , m2 = mod + 2 ;
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
ll fhash(string s, ll p , ll m)
{
	ll res = 0;
	ll ppow = 1;
	for(ll i = 0 ; i < s.length() ; i++ )
	{
		res = (res + (s[i] - 'a' + 1) * ppow) % m;
		ppow = (ppow * p) % m;
	}
	return res;
}
int main()
{
    fast();
    ll n, q;
    cin>>n>>q;
    set<pair<ll,ll>> data;
    ll invp1 = power(p1 , m1 - 2 , m1) , invp2 = power(p2 , m2 - 2 , m2);
    for(ll i = 0;  i < n ; i++ )
    {
    	ll x;
    	string s;
    	cin>>x;
    	cin>>s;
    	data.insert( {fhash(s , p1 , m1) , fhash(s , p2 , m2)} );
    }
    ll x;
	string s;
	cin>>x;
	cin>>s;
	pair<ll,ll> ans = {fhash(s , p1 , m1) , fhash(s , p2 , m2)} ;
	deque<char> foo;
	for(ll i = 0 ; i < s.length() ; i++)
		foo.pb(s[i]);
	while(q--)
	{
		cin>>x;
		switch(x)
		{
			case 1:
			char c;
			cin>>c;
			foo.push_front(c);
			ans.ff = ((ans.ff) * p1 + (c - 'a' + 1)) % m1;
			ans.ss = ((ans.ss) * p2 + (c - 'a' + 1)) % m2;
			break;

			case 2:
			cin>>c;
			foo.pb(c);
			ans.ff = (ans.ff + (c - 'a' + 1) * power(p1 , foo.size() - 1 , m1)) % m1;
			ans.ss = (ans.ss + (c - 'a' + 1) * power(p2 , foo.size() - 1 , m2)) % m2;
			break;

			case 3:
			ans.ff = ((ans.ff + m1 - (foo.front() - 'a' + 1)) * invp1) % m1;
			ans.ss = ((ans.ss + m2 - (foo.front() - 'a' + 1)) * invp2) % m2;
			foo.pop_front();
			break;

			case 4:
			ans.ff = (ans.ff - (foo.back() - 'a' + 1) * power(p1 , foo.size() - 1 , m1) )  % m1;
			if(ans.ff < 0) ans.ff += m1;
			ans.ss = (ans.ss - (foo.back() - 'a' + 1) * power(p2 , foo.size() - 1 , m2) )  % m2;
			if(ans.ss < 0) ans.ss += m2;
			foo.pop_back();
			break;

			case 5:
			if(data.count(ans))
				cout<<"yes\n";
			else
				cout<<"no\n";
			break;
		}
	}
}
