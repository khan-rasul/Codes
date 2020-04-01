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
int main()
{
    // fast();
    ll n;
    cin>>n;
    vector<pair<ll,ll>> foo;
    for(ll i = 2 ; i * i <= n ; i++)
    {
    	if(n % i == 0)
    	{
    		ll c = 0;
    		while(n % i == 0)
    		{
    			n /= i;
    			c++;
    		}
    		foo.pb({i , c});
    	}
    }
    if(n != 1)
    {
    	foo.pb({n , 1});
    }
    ll ans = 1 , c = 1, flag = 0, m = 0;
    for(ll i = 0 ; i < foo.size() ; i++ )
    {
    	while(c < foo[i].ss) c *= 2;
    	m = max(m , foo[i].ss);
    	ans *= foo[i].ff;
    	if(i && foo[i].ss != foo[i - 1].ss) flag = 1;
    }
    if(c != m) flag = 1;
    if(foo.empty()) flag = 0;
    cout<<ans<<" " <<__builtin_popcount(c - 1) + flag<<endl;
}
