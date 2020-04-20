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
vector<ll> solve(vector<ll> foo)
{
	ll n = foo.size();
	set<ll> dat;
	ll m = 0;
	vector<ll> res;
	for(ll i = 0 ; i < n ; i++)
	{
		dat.insert(foo[i]);
		m = max(foo[i] , m);
		if(m == dat.size() && m == i + 1)
			res.pb(i);
	}
	return res;
}
int main()
{
    // fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	vector<ll> foo(n);
    	for(ll i = 0 ; i < n ; i++)
    		cin>>foo[i];
    	vector<ll> left = solve(foo);
    	reverse(foo.begin() , foo.end());
    	vector<ll> right = solve(foo);
    	set<ll> res;
    	for(ll i = 0 ; i < right.size() ; i++ )
		{
			res.insert(n - 1 - right[i]);
		}
    	ll ans = 0;
    	vector<ll> p;
    	for(ll i = 0 ; i < left.size() ; i++ )
    	{
    		if(res.count(left[i] + 1))
    		{
    			ans++;
    			p.pb(left[i] + 1);
    		}
    	}
    	cout<<ans<<endl;
    	for(ll i = 0 ; i < p.size() ; i++)
    		cout<<p[i]<<" "<<n - p[i]<<endl;
    }
}
