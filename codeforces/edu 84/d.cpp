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
vector<ll> c , p;
ll chk(vector<ll> cycle , ll x)
{
    ll n = cycle.size();
    ll res = inf;
    for(ll i = 1 ; i <= x ; i++ )
    {
        ll col = -1 , flag = 1;
        for(ll j = i ; j < n ; j += x)
        {
            if(col == -1)
            {
                col = c[cycle[j]];
            }
            else if(col != c[cycle[j]])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            res = x;
            break;
        }
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
    	c.resize(n + 1);
        p.resize(n + 1);
    	for(ll i = 0 ; i < n ; i++ )
    		cin>>p[i + 1];
    	for(ll i = 0 ; i < n ; i++ )
    		cin>>c[i + 1];
    	ll vis[n + 1] = {0} ;
        vector<vector<ll> > cycles;
    	for(ll i = 1 ; i <= n ; i++ )
    	{
    		if(vis[i] == 0)
    		{
                vector<ll> cycle;
                cycle.pb(0);
    			ll k = i ;
                cycle.pb(k);
    			while(i != p[k])
    			{
    				vis[k] = 1;
                    k = p[k];
    				cycle.pb(k);
    			}
                vis[k] = 1;
                cycles.pb(cycle);
    		}
    	}
        ll ans = inf;
    	for(vector<ll> cycle : cycles)
        {
            ll x = cycle.size() - 1;
            for(ll i = 1 ; i * i <= x ; i++ )
            {
                if(x % i == 0)
                {
                    ans = min(ans , min(chk(cycle , i) , chk(cycle , x / i)));
                }
            }
        }
        cout<<ans<<endl;
    }
}
