/*
* All my senses intensify
* Whenever you and I, we dive
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
ll solver(vector<ll> pf , ll m)
{
    ll n = pf.size();
    ll arr[n + 1] = {0};
    for(ll i = 1 ; i < (1 << n) ; i++)
    {
        ll k = 1;
        for(ll j = 0 ; j < n ; j++ )
        {
            if(i & (1<<j))
            {
                k *= pf[j];
            }
        }
        arr[__builtin_popcount(i)] += ( m / k );
    }
    ll ans = 0;
    for(ll i = 1 ; i <= n ; i++ )
    {
        if( i & 1 )
            ans += arr[i];
        else
            ans -= arr[i];
    }
    return ans;
}

int main()
{
    // fast();
    ll t;
    cin>>t;
    while(t--)
    {
    	ll a , m;
    	cin>>a>>m;
    	ll temp = __gcd(a , m);
    	// cout<<"gcd : "<<temp<<" ";
    	a /= temp ; m /= temp;
    	ll fix = m;
    	ll ans = 0 ;
    	vector<ll> pf;
    	for(ll i = 2 ; i * i <= m ; i++ )
    	{
    		if(m % i == 0)
    		{
    			ans += (fix / i);
    			pf.pb(i);
    		}
    		while(m % i == 0)
    		{
    			m /= i;
    		}
    	}
    	if(m != 1)
    	{
    		ans += (fix / m);
    		pf.pb(m);
    	}
    	cout<<fix - solver(pf , fix ) <<endl;
    }
}
