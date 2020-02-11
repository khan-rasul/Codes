/*-----rk_98-----*/
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
int main()
{
    //fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	vector<ll> foo;
    	while(n)
    	{
    		foo.pb(n % 2);
    		n /= 2;
    	}
    	ll x = 0;
    	for(ll i = foo.size() - 1 ; i >= 0 ; i--)
    	{
    		ll temp = x ^ foo[i];
    		x = foo[i];
    		foo[i] = temp;
    	}
    	ll ans = 0, p = 1;
    	for(ll i = 0 ; i < foo.size() ; i++)
    	{
    		ans += p * foo[i];
    		p *= 2;
    	}
    	cout<<ans<<endl;
    }
}
